/*
  ==============================================================================

    ThemeMenu.cpp
    Created: 11 Jun 2022 12:29:53am
    Author:  Landon Viator

  ==============================================================================
*/

#include "SettingsPage.h"

void SettingsPage::setThemeMenuProps()
{
    m_themeMenu.setText("Themes");
    m_themeMenu.setTextWhenNothingSelected("Themes");
    m_themeMenu.addSectionHeading("Dark");
    m_themeMenu.addItem("Dracula", 1);
    m_themeMenu.addItem("Prime Dark", 2);
    m_themeMenu.addItem("Tokyo Lofi", 3);
    m_themeMenu.addItem("Winter", 4);
    m_themeMenu.addItem("Foxy", 5);
    m_themeMenu.addItem("Purp", 6);
    m_themeMenu.addItem("Dull", 7);
    m_themeMenu.addSectionHeading("Light");
    m_themeMenu.addItem("Prime Light", 8);
    m_themeMenu.addItem("Tokyo Light", 9);
    m_themeMenu.addItem("Material Light", 10);
    
    m_themeMenu.onChange = [this]()
    {
        switch (m_themeMenu.getSelectedId())
        {
            case 1:
            {
                setPluginTheme(Theme::kDracula);
                getParentComponent()->repaint();
                break;
            }
                
            case 2:
            {
                setPluginTheme(Theme::kPrimeDark);
                getParentComponent()->repaint();
                break;
            }
                
            case 3:
            {
                setPluginTheme(Theme::kTokyoLofi);
                getParentComponent()->repaint();
                break;
            }
                
            case 4:
            {
                setPluginTheme(Theme::kWinter);
                getParentComponent()->repaint();
                break;
            }
                
            case 5:
            {
                setPluginTheme(Theme::kFoxy);
                getParentComponent()->repaint();
                break;
            }
                
            case 6:
            {
                setPluginTheme(Theme::kPurp);
                getParentComponent()->repaint();
                break;
            }
                
            case 7:
            {
                setPluginTheme(Theme::kDull);
                getParentComponent()->repaint();
                break;
            }
                
            case 8:
            {
                setPluginTheme(Theme::kPrimeLight);
                getParentComponent()->repaint();
                break;
            }
                
            case 9:
            {
                setPluginTheme(Theme::kTokyoLight);
                getParentComponent()->repaint();
                break;
            }
                
            case 10:
            {
                setPluginTheme(Theme::kMaterialLight);
                getParentComponent()->repaint();
                break;
            }
        }
    };
}