---
title: '{{ name }}'
---

# `function` {{ name }} <font size="4">({{ side }}-side)</font>

{% if deprecated %}
!!! danger "Deprecated since version: {{ deprecated }}"
{% else %}
!!! info "Available since version: {{ version }}"
{% endif %}
{% for note in notes %}
!!! note
    {{ note }}
{% endfor %}

{{ description }}

## Declaration

```cpp
{{ declaration }}
```

## Parameters

{% if params %}
{% for param in params %}
* `{{ param.type }}` **{{ param.name }}**: {{ param.description }}
{% endfor %}
{% else %}
No parameters.
{% endif %}

{% if returns %}
## Returns `{{ returns.type }}`

{{ returns.description }}
{% endif %}

{% for example in examples %}
=== "{{ example.language }}"

    ```{{ example.language | lower }}
    {{ example.code | indent(4) }}
    ```
{% endfor %}

---
