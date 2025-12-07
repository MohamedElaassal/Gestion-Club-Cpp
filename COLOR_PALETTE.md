# 🎨 Color Palette Reference

## Primary Color Scheme

### Background Colors
```
Dark Background    : #1a1d29  RGB(26, 29, 41)
Secondary BG       : #252936  RGB(37, 41, 54)
Component BG       : #1f2332  RGB(31, 35, 50)
Border/Divider     : #2d3348  RGB(45, 51, 72)
Subtle Border      : #374151  RGB(55, 65, 81)
```

### Text Colors
```
Primary Text       : #e4e7eb  RGB(228, 231, 235)
Bright Text        : #f3f4f6  RGB(243, 244, 246)
Muted Text         : #9ca3af  RGB(156, 163, 175)
Placeholder Text   : #6b7280  RGB(107, 114, 128)
```

### Action Colors

#### Primary (Indigo/Blue)
```
Primary Start      : #4f46e5  RGB(79, 70, 229)
Primary End        : #4338ca  RGB(67, 56, 202)
Primary Hover Start: #6366f1  RGB(99, 102, 241)
Primary Hover End  : #4f46e5  RGB(79, 70, 229)
Primary Pressed    : #3730a3  RGB(55, 48, 163)
```

#### Success (Green) - Add Actions
```
Success Start      : #10b981  RGB(16, 185, 129)
Success End        : #059669  RGB(5, 150, 105)
Success Hover Start: #34d399  RGB(52, 211, 153)
Success Hover End  : #10b981  RGB(16, 185, 129)
```

#### Warning (Orange) - Edit Actions
```
Warning Start      : #f59e0b  RGB(245, 158, 11)
Warning End        : #d97706  RGB(217, 119, 6)
Warning Hover Start: #fbbf24  RGB(251, 191, 36)
Warning Hover End  : #f59e0b  RGB(245, 158, 11)
```

#### Danger (Red) - Delete Actions
```
Danger Start       : #ef4444  RGB(239, 68, 68)
Danger End         : #dc2626  RGB(220, 38, 38)
Danger Hover Start : #f87171  RGB(248, 113, 113)
Danger Hover End   : #ef4444  RGB(239, 68, 68)
```

#### Info (Purple) - Search Actions
```
Info Start         : #8b5cf6  RGB(139, 92, 246)
Info End           : #7c3aed  RGB(124, 58, 237)
Info Hover Start   : #a78bfa  RGB(167, 139, 250)
Info Hover End     : #8b5cf6  RGB(139, 92, 246)
```

#### Special (Cyan) - Login
```
Cyan Start         : #06b6d4  RGB(6, 182, 212)
Cyan End           : #0891b2  RGB(8, 145, 178)
Cyan Hover Start   : #22d3ee  RGB(34, 211, 238)
Cyan Hover End     : #06b6d4  RGB(6, 182, 212)
```

## Gradient Examples

### Vertical Gradient (Most Buttons)
```css
qlineargradient(
    x1: 0, y1: 0, x2: 0, y2: 1,
    stop: 0 #4f46e5,  /* Top */
    stop: 1 #4338ca   /* Bottom */
);
```

### Horizontal Gradient (Special Buttons)
```css
qlineargradient(
    x1: 0, y1: 0, x2: 1, y2: 0,
    stop: 0 #06b6d4,  /* Left */
    stop: 1 #0891b2   /* Right */
);
```

### Diagonal Gradient (Main Window)
```css
qlineargradient(
    x1: 0, y1: 0, x2: 1, y2: 1,
    stop: 0 #1a1d29,  /* Top-Left */
    stop: 1 #252936   /* Bottom-Right */
);
```

## Usage Guidelines

### When to Use Each Color

| Color    | Use Case                          | Example Components          |
|----------|-----------------------------------|-----------------------------|
| Indigo   | Primary actions, tabs, focus      | Default buttons, selected tabs |
| Green    | Create/Add operations             | Add Student, Add Club       |
| Orange   | Edit/Modify operations            | Edit buttons                |
| Red      | Delete/Remove operations          | Delete buttons, Remove      |
| Purple   | Search/Filter operations          | Search buttons              |
| Cyan     | Authentication                    | Login button                |
| Green    | Registration                      | Register button             |
| Gray     | Cancel/Neutral actions            | Cancel buttons              |

## Accessibility Notes

### Contrast Ratios
- All text on backgrounds meets WCAG AA standards
- Button text always white (#ffffff) for maximum contrast
- Hover states increase brightness by ~20%
- Focus borders bright indigo (#6366f1) for visibility

### Color Blindness Considerations
- Primary actions use shape/position not just color
- Text labels on all buttons
- Icons supplement color coding
- Multiple visual cues (color + icon + text)

## Design System Tokens

If extending the design, maintain these relationships:

```
Base Color (100%)     : Primary color
Hover (+20% lightness): Interactive feedback
Pressed (-20% lightness): Click confirmation
Border (Adjacent hue) : Subtle definition
```

## Quick Color Picker

Copy these hex codes for external tools:

**Most Used Colors:**
```
#4f46e5  - Primary Indigo
#10b981  - Success Green
#f59e0b  - Warning Orange
#ef4444  - Danger Red
#1a1d29  - Background Dark
#e4e7eb  - Text Light
#2d3348  - Border Gray
```

---

**Note**: All colors chosen for modern aesthetics while maintaining professional appearance suitable for academic presentations.
