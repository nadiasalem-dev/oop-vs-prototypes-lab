# Level 00 — Shared Behavior (No Inheritance)

## Prompt
Implement a basic notification sender that supports multiple notification types
without using inheritance.

Supported notification types:
- Email
- SMS

Each notification must:
1. Validate the recipient (basic validation is fine)
2. Send a message (simulated with console output)

You may use conditionals, maps, or functions, but **no base classes or inheritance**.

## Requirements
- Implement the same logic in:
  - C++
  - JavaScript
- Adding a new notification type should require modifying existing logic

## Purpose
This level establishes a baseline and intentionally allows duplication.
The goal is to observe pain points that motivate inheritance or composition later.
