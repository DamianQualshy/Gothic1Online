---
title: '{{ name }}'
---

# `event` {{ name }} <font size="4">({{ side }}-side)</font>

{% if deprecated %}
!!! danger "Deprecated since version: {{ deprecated }}"
{% else %}
!!! info "Available since version: {{ version }}"
{% endif %}
{% if cancellable %}
!!! tip "This event can be canceled"
{% endif %}
{% for note in notes %}
!!! note
    {{ note }}
{% endfor %}

{{ description }}

## Parameters

{% if params %}
```cpp
{{ declaration }}
```

{% for param in params %}
* `{{ param.type }}` **{{ param.name }}**: {{ param.description }}
{% endfor %}
{% else %}
No parameters.
{% endif %}

{% for example in examples %}
=== "{{ example.language }}"

    ```{{ example.language | lower }}
    {{ example.code | indent(4) }}
    ```
{% endfor %}

---
