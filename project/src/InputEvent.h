#pragma once

enum class InputEvent {
    // Controlli Sottomarino
        TurboButtonPressed,
        UseHeadlight,

    // Controlli menu
        ToggleHelpMenu,
        QuitMenu,

    // Controlli camera
            SwitchCamera,
    // Controlli grafica
            ToggleCaustics,
            UseShadows,
            UseWireframe
};
