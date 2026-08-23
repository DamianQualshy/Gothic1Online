---
title: '{{ name }}'
---

# `constants` {{ name }}

{{ description }}

| Name | Value |
| --- | ---: |
{% for constant in constants %}| `{{ constant.name }}` | `{{ constant.value }}` |
{% endfor %}
---

