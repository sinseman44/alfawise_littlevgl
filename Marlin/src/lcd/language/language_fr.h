/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * French
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */

#define DISPLAY_CHARSET_ISO10646_1
#define CHARSIZE 2

#define WELCOME_MSG                         MACHINE_NAME _UxGT(" prête.")
#define MSG_YES                             _UxGT("Oui")
#define MSG_NO                              _UxGT("Non")
#define MSG_BACK                            _UxGT("Retour")
#define MSG_SD_INSERTED                     _UxGT("Carte insérée")
#define MSG_SD_REMOVED                      _UxGT("Carte retirée")
#define MSG_SD_RELEASED                     _UxGT("Carte libérée")
#define MSG_LCD_ENDSTOPS                    _UxGT("Butées")
#define MSG_LCD_SOFT_ENDSTOPS               _UxGT("Butées SW")
#define MSG_MAIN                            _UxGT("Menu principal")
#define MSG_ADVANCED_SETTINGS               _UxGT("Config. avancée")
#define MSG_CONFIGURATION                   _UxGT("Configuration")
#define MSG_AUTOSTART                       _UxGT("Exéc. auto#.gcode")
#define MSG_DISABLE_STEPPERS                _UxGT("Arrêter moteurs")
#define MSG_DEBUG_MENU                      _UxGT("Menu debug")
#define MSG_PROGRESS_BAR_TEST               _UxGT("Test barre progress.")
#define MSG_AUTO_HOME                       _UxGT("Origine auto")
#define MSG_AUTO_HOME_X                     _UxGT("Origine X auto")
#define MSG_AUTO_HOME_Y                     _UxGT("Origine Y auto")
#define MSG_AUTO_HOME_Z                     _UxGT("Origine Z auto")
#define MSG_AUTO_Z_ALIGN                    _UxGT("Align. Z auto")
#define MSG_LEVEL_BED_HOMING                _UxGT("Origine XYZ...")
#define MSG_LEVEL_BED_WAITING               _UxGT("Clic pour commencer")
#define MSG_LEVEL_BED_NEXT_POINT            _UxGT("Point suivant")
#define MSG_LEVEL_BED_DONE                  _UxGT("Mise à niveau OK!")
#define MSG_Z_FADE_HEIGHT                   _UxGT("Hauteur lissée")
#define MSG_SET_HOME_OFFSETS                _UxGT("Régl. décal origine")
#define MSG_HOME_OFFSETS_APPLIED            _UxGT("Décalages appliqués")
#define MSG_SET_ORIGIN                      _UxGT("Régler origine")
#define MSG_PREHEAT_1                       _UxGT("Préchauffage " PREHEAT_1_LABEL)
#define MSG_PREHEAT_1_N                     _UxGT("Préchauff. " PREHEAT_1_LABEL " ")
#define MSG_PREHEAT_1_ALL                   _UxGT("Préch. " PREHEAT_1_LABEL " Tout")
#define MSG_PREHEAT_1_END                   _UxGT("Préch. " PREHEAT_1_LABEL " buse")
#define MSG_PREHEAT_1_BEDONLY               _UxGT("Préch. " PREHEAT_1_LABEL " lit")
#define MSG_PREHEAT_1_SETTINGS              _UxGT("Régler préch. " PREHEAT_1_LABEL)
#define MSG_PREHEAT_2                       _UxGT("Préchauffage " PREHEAT_2_LABEL)
#define MSG_PREHEAT_2_N                     _UxGT("Préchauff. " PREHEAT_2_LABEL " ")
#define MSG_PREHEAT_2_ALL                   _UxGT("Préch. " PREHEAT_2_LABEL " Tout")
#define MSG_PREHEAT_2_END                   _UxGT("Préch. " PREHEAT_2_LABEL " buse")
#define MSG_PREHEAT_2_BEDONLY               _UxGT("Préch. " PREHEAT_2_LABEL " lit")
#define MSG_PREHEAT_2_SETTINGS              _UxGT("Régler préch. " PREHEAT_2_LABEL)
#define MSG_PREHEAT_CUSTOM                  _UxGT("Préchauffage perso")
#define MSG_COOLDOWN                        _UxGT("Refroidir")
#define MSG_LASER_MENU                      _UxGT("Contrôle Laser")
#define MSG_LASER_OFF                       _UxGT("Laser Off")
#define MSG_LASER_ON                        _UxGT("Laser On")
#define MSG_LASER_POWER                     _UxGT("Puissance")
#define MSG_SPINDLE_REVERSE                 _UxGT("Inverser broches")
#define MSG_SWITCH_PS_ON                    _UxGT("Allumer alim.")
#define MSG_SWITCH_PS_OFF                   _UxGT("Eteindre alim.")
#define MSG_EXTRUDE                         _UxGT("Extrusion")
#define MSG_RETRACT                         _UxGT("Retrait")
#define MSG_MOVE_AXIS                       _UxGT("Déplacer un axe")
#define MSG_BED_LEVELING                    _UxGT("Régler Niv. lit")
#define MSG_LEVEL_BED                       _UxGT("Niveau du lit")
#define MSG_LEVEL_CORNERS                   _UxGT("Niveau coins")
#define MSG_NEXT_CORNER                     _UxGT("Coin suivant")
#define MSG_EDITING_STOPPED                 _UxGT("Arrêt édit. maillage")
#define MSG_MESH_X                          _UxGT("Index X")
#define MSG_MESH_Y                          _UxGT("Index Y")
#define MSG_MESH_EDIT_Z                     _UxGT("Valeur Z")
#define MSG_USER_MENU                       _UxGT("Commandes perso")

#define MSG_UBL_DOING_G29                   _UxGT("G29 en cours")
#define MSG_UBL_UNHOMED                     _UxGT("Origine XYZ d'abord")
#define MSG_UBL_TOOLS                       _UxGT("Outils UBL")
#define MSG_UBL_LEVEL_BED                   _UxGT("Niveau lit unifié")
#define MSG_LCD_PROBING_MESH                _UxGT("Probing point")
#define MSG_LCD_TILTING_MESH                _UxGT("Tilting point")
#define MSG_IDEX_MENU                       _UxGT("Mode IDEX")
#define MSG_IDEX_MODE_AUTOPARK              _UxGT("Auto-Park")
#define MSG_IDEX_MODE_DUPLICATE             _UxGT("Duplication")
#define MSG_IDEX_MODE_MIRRORED_COPY         _UxGT("Copie miroir")
#define MSG_IDEX_MODE_FULL_CTRL             _UxGT("Contrôle complet")
#define MSG_OFFSETS_MENU                    _UxGT("Offsets Outil")
#define MSG_X_OFFSET                        _UxGT("Buse 2 X")
#define MSG_Y_OFFSET                        _UxGT("Buse 2 Y")
#define MSG_Z_OFFSET                        _UxGT("Buse 2 Z")
#define MSG_UBL_MANUAL_MESH                 _UxGT("Maillage manuel")
#define MSG_UBL_BC_INSERT                   _UxGT("Poser câle & mesurer")
#define MSG_UBL_BC_INSERT2                  _UxGT("Mesure")
#define MSG_UBL_BC_REMOVE                   _UxGT("ôter et mesurer lit")
#define MSG_UBL_MOVING_TO_NEXT              _UxGT("Aller au suivant")
#define MSG_UBL_ACTIVATE_MESH               _UxGT("Activer l'UBL")
#define MSG_UBL_DEACTIVATE_MESH             _UxGT("Désactiver l'UBL")
#define MSG_UBL_SET_TEMP_BED                _UxGT("Température lit")
#define MSG_UBL_BED_TEMP_CUSTOM             MSG_UBL_SET_TEMP_BED
#define MSG_UBL_SET_TEMP_HOTEND             _UxGT("Température buse")
#define MSG_UBL_HOTEND_TEMP_CUSTOM          MSG_UBL_SET_TEMP_HOTEND
#define MSG_UBL_MESH_EDIT                   _UxGT("Editer maille")
#define MSG_UBL_EDIT_CUSTOM_MESH            _UxGT("Editer maille perso")
#define MSG_UBL_FINE_TUNE_MESH              _UxGT("Réglage fin maille")
#define MSG_UBL_DONE_EDITING_MESH           _UxGT("Terminer maille")
#define MSG_UBL_BUILD_CUSTOM_MESH           _UxGT("Créer maille perso")
#define MSG_UBL_BUILD_MESH_MENU             _UxGT("Créer maille")
#define MSG_UBL_BUILD_MESH_M1               _UxGT("Créer maille " PREHEAT_1_LABEL)
#define MSG_UBL_BUILD_MESH_M2               _UxGT("Créer maille " PREHEAT_2_LABEL)
#define MSG_UBL_BUILD_COLD_MESH             _UxGT("Créer maille froide")
#define MSG_UBL_MESH_HEIGHT_ADJUST          _UxGT("Ajuster haut. maille")
#define MSG_UBL_MESH_HEIGHT_AMOUNT          _UxGT("Hauteur")
#define MSG_UBL_VALIDATE_MESH_MENU          _UxGT("Valider maille")
#define MSG_UBL_VALIDATE_MESH_M1            _UxGT("Valider maille " PREHEAT_1_LABEL)
#define MSG_UBL_VALIDATE_MESH_M2            _UxGT("Valider maille " PREHEAT_2_LABEL)
#define MSG_UBL_VALIDATE_CUSTOM_MESH        _UxGT("Valider maille perso")
#define MSG_UBL_CONTINUE_MESH               _UxGT("Continuer maille")
#define MSG_UBL_MESH_LEVELING               _UxGT("Niveau par maille")
#define MSG_UBL_3POINT_MESH_LEVELING        _UxGT("Niveau à 3 points")
#define MSG_UBL_GRID_MESH_LEVELING          _UxGT("Niveau grille")
#define MSG_UBL_MESH_LEVEL                  _UxGT("Maille de niveau")
#define MSG_UBL_SIDE_POINTS                 _UxGT("Point latéral")
#define MSG_UBL_MAP_TYPE                    _UxGT("Type de carte")
#define MSG_UBL_OUTPUT_MAP                  _UxGT("Voir maille")
#define MSG_UBL_OUTPUT_MAP_HOST             _UxGT("Voir pour hôte")
#define MSG_UBL_OUTPUT_MAP_CSV              _UxGT("Voir pour CSV")
#define MSG_UBL_OUTPUT_MAP_BACKUP           _UxGT("Voir pour sauveg.")
#define MSG_UBL_INFO_UBL                    _UxGT("Voir info UBL")
#define MSG_EDIT_MESH                       _UxGT("Modifier maille")
#define MSG_UBL_FILLIN_AMOUNT               _UxGT("Taux de remplissage")
#define MSG_UBL_MANUAL_FILLIN               _UxGT("Remplissage manuel")
#define MSG_UBL_SMART_FILLIN                _UxGT("Remplissage auto")
#define MSG_UBL_FILLIN_MESH                 _UxGT("Maille remplissage")
#define MSG_UBL_INVALIDATE_ALL              _UxGT("Tout annuler")
#define MSG_UBL_INVALIDATE_CLOSEST          _UxGT("Annuler le plus près")
#define MSG_UBL_FINE_TUNE_ALL               _UxGT("Réglage fin (tous)")
#define MSG_UBL_FINE_TUNE_CLOSEST           _UxGT("Réglage fin (proche)")
#define MSG_UBL_STORAGE_MESH_MENU           _UxGT("Stockage maille")
#define MSG_UBL_STORAGE_SLOT                _UxGT("Slot mémoire")
#define MSG_UBL_LOAD_MESH                   _UxGT("Charger maille")
#define MSG_UBL_SAVE_MESH                   _UxGT("Sauver maille")
#define MSG_MESH_LOADED                     _UxGT("Maille %i chargée")
#define MSG_MESH_SAVED                      _UxGT("Maille %i enreg.")
#define MSG_NO_STORAGE                      _UxGT("Pas de mémoire")
#define MSG_UBL_SAVE_ERROR                  _UxGT("Err: Enreg. UBL")
#define MSG_UBL_RESTORE_ERROR               _UxGT("Err: Ouvrir UBL")
#define MSG_UBL_Z_OFFSET_STOPPED            _UxGT("Décal. Z arrêté")
#define MSG_UBL_STEP_BY_STEP_MENU           _UxGT("UBL Pas à pas")

#define MSG_LED_CONTROL                     _UxGT("Contrôle LED")
#define MSG_LEDS                            _UxGT("Lumière")
#define MSG_LED_PRESETS                     _UxGT("Préregl. LED")
#define MSG_SET_LEDS_RED                    _UxGT("Rouge")
#define MSG_SET_LEDS_ORANGE                 _UxGT("Orange")
#define MSG_SET_LEDS_YELLOW                 _UxGT("Jaune")
#define MSG_SET_LEDS_GREEN                  _UxGT("Vert")
#define MSG_SET_LEDS_BLUE                   _UxGT("Bleu")
#define MSG_SET_LEDS_INDIGO                 _UxGT("Indigo")
#define MSG_SET_LEDS_VIOLET                 _UxGT("Violet")
#define MSG_SET_LEDS_WHITE                  _UxGT("Blanc")
#define MSG_SET_LEDS_DEFAULT                _UxGT("Defaut")
#define MSG_CUSTOM_LEDS                     _UxGT("LEDs perso.")
#define MSG_INTENSITY_R                     _UxGT("Intensité rouge")
#define MSG_INTENSITY_G                     _UxGT("Intensité vert")
#define MSG_INTENSITY_B                     _UxGT("Intensité bleu")
#define MSG_INTENSITY_W                     _UxGT("Intensité blanc")
#define MSG_LED_BRIGHTNESS                  _UxGT("Luminosité")

#define MSG_MOVING                          _UxGT("Déplacement...")
#define MSG_FREE_XY                         _UxGT("Débloquer XY")
#define MSG_MOVE_X                          _UxGT("Déplacer X")
#define MSG_MOVE_Y                          _UxGT("Déplacer Y")
#define MSG_MOVE_Z                          _UxGT("Déplacer Z")
#define MSG_MOVE_E                          _UxGT("Extrudeur")
#define MSG_HOTEND_TOO_COLD                 _UxGT("Buse trop froide")
#define MSG_MOVE_0025MM                     _UxGT("Déplacer 0.025mm")
#define MSG_MOVE_01MM                       _UxGT("Déplacer 0.1mm")
#define MSG_MOVE_1MM                        _UxGT("Déplacer 1mm")
#define MSG_MOVE_10MM                       _UxGT("Déplacer 10mm")
#define MSG_MOVE_50MM                       _UxGT("Déplacer 50mm")
#define MSG_SPEED                           _UxGT("Vitesse")
#define MSG_BED_Z                           _UxGT("Lit Z")
#define MSG_NOZZLE                          _UxGT("Buse")
#define MSG_BED                             _UxGT("Lit")
#define MSG_CHAMBER                         _UxGT("Caisson")
#define MSG_FAN_SPEED                       _UxGT("Vitesse ventil.")
#define MSG_EXTRA_FAN_SPEED                 _UxGT("Extra V ventil.")

#define MSG_FLOW                            _UxGT("Flux")
#define MSG_CONTROL                         _UxGT("Contrôler")
#define MSG_MIN                             LCD_STR_THERMOMETER _UxGT(" Min")
#define MSG_MAX                             LCD_STR_THERMOMETER _UxGT(" Max")
#define MSG_FACTOR                          LCD_STR_THERMOMETER _UxGT(" Facteur")
#define MSG_AUTOTEMP                        _UxGT("Temp. Auto.")
#define MSG_LCD_ON                          _UxGT("Marche")
#define MSG_LCD_OFF                         _UxGT("Arrêt")
#define MSG_PID_P                           _UxGT("PID-P")
#define MSG_PID_I                           _UxGT("PID-I")
#define MSG_PID_D                           _UxGT("PID-D")
#define MSG_PID_C                           _UxGT("PID-C")
#define MSG_SELECT                          _UxGT("Sélectionner")
#define MSG_ACC                             _UxGT("Accélération")
#define MSG_JERK                            _UxGT("Jerk")
#if IS_KINEMATIC
  #define MSG_VA_JERK                       _UxGT("Va jerk")
  #define MSG_VB_JERK                       _UxGT("Vb jerk")
  #define MSG_VC_JERK                       _UxGT("Vc jerk")
#else
  #define MSG_VA_JERK                       _UxGT("Vx jerk")
  #define MSG_VB_JERK                       _UxGT("Vy jerk")
  #define MSG_VC_JERK                       _UxGT("Vz jerk")
#endif
#define MSG_VE_JERK                         _UxGT("Ve jerk")
#define MSG_VELOCITY                        _UxGT("Vélocité")
#define MSG_JUNCTION_DEVIATION              _UxGT("Déviat. jonct.")
#define MSG_VMAX                            _UxGT("Vmax ")
#define MSG_VMIN                            _UxGT("Vmin ")
#define MSG_VTRAV_MIN                       _UxGT("V dépl. min")
#define MSG_ACCELERATION                    _UxGT("Accélération")
#define MSG_AMAX                            _UxGT("Amax ")
#define MSG_A_RETRACT                       _UxGT("A retrait")
#define MSG_A_TRAVEL                        _UxGT("A dépl.")
#define MSG_STEPS_PER_MM                    _UxGT("Pas/mm")
#if IS_KINEMATIC
  #define MSG_ASTEPS                        _UxGT("A pas/mm")
  #define MSG_BSTEPS                        _UxGT("B pas/mm")
  #define MSG_CSTEPS                        _UxGT("C pas/mm")
#else
  #define MSG_ASTEPS                        _UxGT("X pas/mm")
  #define MSG_BSTEPS                        _UxGT("Y pas/mm")
  #define MSG_CSTEPS                        _UxGT("Z pas/mm")
#endif
#define MSG_ESTEPS                          _UxGT("E pas/mm")
#define MSG_E1STEPS                         _UxGT("E1 pas/mm")
#define MSG_E2STEPS                         _UxGT("E2 pas/mm")
#define MSG_E3STEPS                         _UxGT("E3 pas/mm")
#define MSG_E4STEPS                         _UxGT("E4 pas/mm")
#define MSG_E5STEPS                         _UxGT("E5 pas/mm")
#define MSG_E6STEPS                         _UxGT("E6 pas/mm")
#define MSG_TEMPERATURE                     _UxGT("Température")
#define MSG_MOTION                          _UxGT("Mouvement")
#define MSG_FILAMENT                        _UxGT("Filament")
#define MSG_VOLUMETRIC_ENABLED              _UxGT("E en mm3")
#define MSG_FILAMENT_DIAM                   _UxGT("Diamètre fil.")
#define MSG_FILAMENT_UNLOAD                 _UxGT("Retrait mm")
#define MSG_FILAMENT_LOAD                   _UxGT("Charger mm")
#define MSG_ADVANCE_K                       _UxGT("Avance K")
#define MSG_CONTRAST                        _UxGT("Contraste LCD")
#define MSG_STORE_EEPROM                    _UxGT("Enregistrer config.")
#define MSG_LOAD_EEPROM                     _UxGT("Charger config.")
#define MSG_RESTORE_FAILSAFE                _UxGT("Restaurer défauts")
#define MSG_INIT_EEPROM                     _UxGT("Initialiser EEPROM")
#define MSG_SD_UPDATE                       _UxGT("MaJ Firmware SD")
#define MSG_RESET_PRINTER                   _UxGT("RaZ imprimante")
#define MSG_REFRESH                         _UxGT("Actualiser")
#define MSG_WATCH                           _UxGT("Surveiller")
#define MSG_PREPARE                         _UxGT("Préparer")
#define MSG_TUNE                            _UxGT("Régler")
#define MSG_START_PRINT                     _UxGT("Démarrer impression")
#define MSG_BUTTON_NEXT                     _UxGT("Suivant")
#define MSG_BUTTON_INIT                     _UxGT("Init.")
#define MSG_BUTTON_STOP                     _UxGT("Stop")
#define MSG_BUTTON_PRINT                    _UxGT("Imprimer")
#define MSG_BUTTON_RESET                    _UxGT("Reset")
#define MSG_BUTTON_CANCEL                   _UxGT("Annuler")
#define MSG_BUTTON_DONE                     _UxGT("Terminé")
#define MSG_PAUSE_PRINT                     _UxGT("Pause impression")
#define MSG_RESUME_PRINT                    _UxGT("Reprendre impr.")
#define MSG_STOP_PRINT                      _UxGT("Arrêter impr.")
#define MSG_OUTAGE_RECOVERY                 _UxGT("Récupér. coupure")
#define MSG_CARD_MENU                       _UxGT("Impression SD")
#define MSG_NO_CARD                         _UxGT("Pas de carte")
#define MSG_DWELL                           _UxGT("Repos...")
#define MSG_USERWAIT                        _UxGT("Attente utilis.")
#define MSG_PRINT_PAUSED                    _UxGT("Impr. en pause")
#define MSG_PRINTING                        _UxGT("Impression")
#define MSG_PRINT_ABORTED                   _UxGT("Impr. annulée")
#define MSG_NO_MOVE                         _UxGT("Moteurs bloqués")
#define MSG_KILLED                          _UxGT("KILLED")
#define MSG_STOPPED                         _UxGT("STOPPÉ")
#define MSG_CONTROL_RETRACT                 _UxGT("Retrait mm")
#define MSG_CONTROL_RETRACT_SWAP            _UxGT("Ech. Retr. mm")
#define MSG_CONTROL_RETRACTF                _UxGT("Retrait V")
#define MSG_CONTROL_RETRACT_ZHOP            _UxGT("Saut Z mm")
#define MSG_CONTROL_RETRACT_RECOVER         _UxGT("Rappel mm")
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    _UxGT("Ech. Rappel mm")
#define MSG_CONTROL_RETRACT_RECOVERF        _UxGT("Rappel V")
#define MSG_CONTROL_RETRACT_RECOVER_SWAPF   _UxGT("Ech. Rappel V")
#define MSG_AUTORETRACT                     _UxGT("Retrait auto")
#define MSG_TOOL_CHANGE                     _UxGT("Changement outil")
#define MSG_TOOL_CHANGE_ZLIFT               _UxGT("Augmenter Z")
#define MSG_SINGLENOZZLE_PRIME_SPD          _UxGT("Vitesse primaire")
#define MSG_SINGLENOZZLE_RETRACT_SPD        _UxGT("Vitesse retrait")
#define MSG_NOZZLE_STANDBY                  _UxGT("Attente buse")
#define MSG_FILAMENT_SWAP_LENGTH            _UxGT("Distance retrait")
#define MSG_FILAMENTCHANGE                  _UxGT("Changer filament")
#define MSG_FILAMENTLOAD                    _UxGT("Charger filament")
#define MSG_FILAMENTUNLOAD                  _UxGT("Retrait filament")
#define MSG_FILAMENTUNLOAD_ALL              _UxGT("Décharger tout")
#define MSG_INIT_SDCARD                     _UxGT("Init. la carte SD")
#define MSG_CHANGE_SDCARD                   _UxGT("Actualiser carte SD")
#define MSG_RELEASE_SDCARD                  _UxGT("Retirer carte SD")
#define MSG_ZPROBE_OUT                      _UxGT("Sonde Z hors lit")
#define MSG_SKEW_FACTOR                     _UxGT("Facteur écart")
#define MSG_BLTOUCH                         _UxGT("BLTouch")
#define MSG_BLTOUCH_SELFTEST                _UxGT("Autotest BLTouch")
#define MSG_BLTOUCH_RESET                   _UxGT("RaZ BL-Touch")
#define MSG_BLTOUCH_DEPLOY                  _UxGT("Déployer BL-Touch")
#define MSG_BLTOUCH_SW_MODE                 _UxGT("Mode BLTouch SW")
#define MSG_BLTOUCH_5V_MODE                 _UxGT("Mode BLTouch 5V")
#define MSG_BLTOUCH_OD_MODE                 _UxGT("Mode BLTouch OD")
#define MSG_BLTOUCH_MODE_STORE              _UxGT("Mode BLTouch Store")
#define MSG_BLTOUCH_STOW                    _UxGT("Ranger BL-Touch")
#define MSG_MANUAL_DEPLOY                   _UxGT("Déployer Sonde Z")
#define MSG_MANUAL_STOW                     _UxGT("Ranger Sonde Z")
#define MSG_HOME                            _UxGT("Origine")  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           _UxGT("Premier")
#define MSG_ZPROBE_ZOFFSET                  _UxGT("Décalage Z")
#define MSG_BABYSTEP_X                      _UxGT("Babystep X")
#define MSG_BABYSTEP_Y                      _UxGT("Babystep Y")
#define MSG_BABYSTEP_Z                      _UxGT("Babystep Z")
#define MSG_BABYSTEP_TOTAL                  _UxGT("Total")
#define MSG_ENDSTOP_ABORT                   _UxGT("Butée abandon")
#define MSG_HEATING_FAILED_LCD              _UxGT("Err de chauffe")
#define MSG_HEATING_FAILED_LCD_BED          _UxGT("Err de chauffe lit")
#define MSG_HEATING_FAILED_LCD_CHAMBER      _UxGT("Err chauffe caisson")
#define MSG_ERR_REDUNDANT_TEMP              _UxGT("Err TEMP. REDONDANTE")
#define MSG_THERMAL_RUNAWAY                 _UxGT("Err THERMIQUE")
#define MSG_THERMAL_RUNAWAY_BED             _UxGT("Err THERMIQUE LIT")
#define MSG_THERMAL_RUNAWAY_CHAMBER         _UxGT("Err THERMIQUE CAISSON")
#define MSG_ERR_MAXTEMP                     _UxGT("Err TEMP. MAX")
#define MSG_ERR_MINTEMP                     _UxGT("Err TEMP. MIN")
#define MSG_ERR_MAXTEMP_BED                 _UxGT("Err TEMP. MAX LIT")
#define MSG_ERR_MINTEMP_BED                 _UxGT("Err TEMP. MIN LIT")
#define MSG_ERR_MAXTEMP_CHAMBER             _UxGT("Err MAXTEMP CAISSON")
#define MSG_ERR_MINTEMP_CHAMBER             _UxGT("Err MINTEMP CAISSON")
#define MSG_ERR_Z_HOMING                    MSG_HOME _UxGT(" ") MSG_X MSG_Y _UxGT(" ") MSG_FIRST

#define MSG_HALTED                          _UxGT("IMPR. STOPPÉE")
#define MSG_PLEASE_RESET                    _UxGT("Redémarrer SVP")
#define MSG_SHORT_DAY                       _UxGT("j") // One character only
#define MSG_SHORT_HOUR                      _UxGT("h") // One character only
#define MSG_SHORT_MINUTE                    _UxGT("m") // One character only

#define MSG_HEATING                         _UxGT("En chauffe...")
#define MSG_COOLING                         _UxGT("Refroidissement")
#define MSG_BED_HEATING                     _UxGT("Lit en chauffe...")
#define MSG_BED_COOLING                     _UxGT("Refroid. du lit...")
#define MSG_CHAMBER_HEATING                 _UxGT("Chauffe caisson...")
#define MSG_CHAMBER_COOLING                 _UxGT("Refroid. caisson...")
#define MSG_DELTA_CALIBRATE                 _UxGT("Calibration Delta")
#define MSG_DELTA_CALIBRATE_X               _UxGT("Calibrer X")
#define MSG_DELTA_CALIBRATE_Y               _UxGT("Calibrer Y")
#define MSG_DELTA_CALIBRATE_Z               _UxGT("Calibrer Z")
#define MSG_DELTA_CALIBRATE_CENTER          _UxGT("Calibrer centre")
#define MSG_DELTA_SETTINGS                  _UxGT("Réglages Delta")
#define MSG_DELTA_AUTO_CALIBRATE            _UxGT("Calibration Auto")
#define MSG_DELTA_HEIGHT_CALIBRATE          _UxGT("Hauteur Delta")
#define MSG_DELTA_Z_OFFSET_CALIBRATE        _UxGT("Delta Z sonde")
#define MSG_DELTA_DIAG_ROD                  _UxGT("Diagonale")
#define MSG_DELTA_HEIGHT                    _UxGT("Hauteur")
#define MSG_DELTA_RADIUS                    _UxGT("Rayon")

#define MSG_INFO_MENU                       _UxGT("Infos imprimante")
#define MSG_INFO_PRINTER_MENU               _UxGT("Infos imprimante")
#define MSG_3POINT_LEVELING                 _UxGT("Niveau à 3 points")
#define MSG_LINEAR_LEVELING                 _UxGT("Niveau linéaire")
#define MSG_BILINEAR_LEVELING               _UxGT("Niveau bilinéaire")
#define MSG_UBL_LEVELING                    _UxGT("Niveau lit unifié")
#define MSG_MESH_LEVELING                   _UxGT("Niveau maillage")
#define MSG_INFO_STATS_MENU                 _UxGT("Stats. imprimante")
#define MSG_INFO_BOARD_MENU                 _UxGT("Infos carte")
#define MSG_INFO_THERMISTOR_MENU            _UxGT("Thermistances")
#define MSG_INFO_EXTRUDERS                  _UxGT("Extrudeurs")
#define MSG_INFO_BAUDRATE                   _UxGT("Bauds")
#define MSG_INFO_PROTOCOL                   _UxGT("Protocole")
#define MSG_CASE_LIGHT                      _UxGT("Lumière caisson")
#define MSG_CASE_LIGHT_BRIGHTNESS           _UxGT("Luminosité")

#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              _UxGT("Nbre impressions")
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("Terminées")
  #define MSG_INFO_PRINT_TIME               _UxGT("Tps impr. total")
  #define MSG_INFO_PRINT_LONGEST            _UxGT("Impr. la + longue")
  #define MSG_INFO_PRINT_FILAMENT           _UxGT("Total filament")
#else
  #define MSG_INFO_PRINT_COUNT              _UxGT("Impressions")
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("Terminées")
  #define MSG_INFO_PRINT_TIME               _UxGT("Total")
  #define MSG_INFO_PRINT_LONGEST            _UxGT("+ long")
  #define MSG_INFO_PRINT_FILAMENT           _UxGT("Filament")
#endif

#define MSG_INFO_MIN_TEMP                   _UxGT("Temp Min")
#define MSG_INFO_MAX_TEMP                   _UxGT("Temp Max")
#define MSG_INFO_PSU                        _UxGT("Alimentation")
#define MSG_DRIVE_STRENGTH                  _UxGT("Puiss. moteur ")
#define MSG_DAC_PERCENT                     _UxGT("Driver %")
#define MSG_DAC_EEPROM_WRITE                _UxGT("DAC EEPROM sauv.")

#define MSG_FILAMENT_CHANGE_HEADER_PAUSE    _UxGT("IMPR. PAUSE")
#define MSG_FILAMENT_CHANGE_HEADER_LOAD     _UxGT("CHARGER FIL")
#define MSG_FILAMENT_CHANGE_HEADER_UNLOAD   _UxGT("DECHARGER FIL")
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   _UxGT("OPTIONS REPRISE:")
#define MSG_FILAMENT_CHANGE_OPTION_PURGE    _UxGT("Purger encore")
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   _UxGT("Reprendre impr.")
#define MSG_FILAMENT_CHANGE_NOZZLE          _UxGT("  Buse: ")
#define MSG_RUNOUT_SENSOR                   _UxGT("Capteur fil.")
#define MSG_ERR_HOMING_FAILED               _UxGT("Echec origine")
#define MSG_ERR_PROBING_FAILED              _UxGT("Echec sonde")
#define MSG_M600_TOO_COLD                   _UxGT("M600: Trop froid")
#define MSG_MMU2_FILAMENT_CHANGE_HEADER     _UxGT("CHANGER FILAMENT")
#define MSG_MMU2_CHOOSE_FILAMENT_HEADER     _UxGT("CHOISIR FILAMENT")
#define MSG_MMU2_MENU                       _UxGT("MMU")
#define MSG_MMU2_WRONG_FIRMWARE             _UxGT("Update MMU firmware!")
#define MSG_MMU2_NOT_RESPONDING             _UxGT("MMU ne répond plus")
#define MSG_MMU2_RESUME                     _UxGT("Continuer impr.")
#define MSG_MMU2_RESUMING                   _UxGT("Reprise...")
#define MSG_MMU2_LOAD_FILAMENT              _UxGT("Charger filament")
#define MSG_MMU2_LOAD_ALL                   _UxGT("Charger tous")
#define MSG_MMU2_LOAD_TO_NOZZLE             _UxGT("Charger dans buse")
#define MSG_MMU2_EJECT_FILAMENT             _UxGT("Ejecter filament")
#define MSG_MMU2_EJECT_FILAMENT0            _UxGT("Ejecter fil. 1")
#define MSG_MMU2_EJECT_FILAMENT1            _UxGT("Ejecter fil. 2")
#define MSG_MMU2_EJECT_FILAMENT2            _UxGT("Ejecter fil. 3")
#define MSG_MMU2_EJECT_FILAMENT3            _UxGT("Ejecter fil. 4")
#define MSG_MMU2_EJECT_FILAMENT4            _UxGT("Ejecter fil. 5")
#define MSG_MMU2_UNLOAD_FILAMENT            _UxGT("Retrait filament")
#define MSG_MMU2_LOADING_FILAMENT           _UxGT("Chargem. fil. %i...")
#define MSG_MMU2_EJECTING_FILAMENT          _UxGT("Ejection fil...")
#define MSG_MMU2_UNLOADING_FILAMENT         _UxGT("Retrait fil....")
#define MSG_MMU2_ALL                        _UxGT("Tous")
#define MSG_MMU2_FILAMENT0                  _UxGT("Filament 1")
#define MSG_MMU2_FILAMENT1                  _UxGT("Filament 2")
#define MSG_MMU2_FILAMENT2                  _UxGT("Filament 3")
#define MSG_MMU2_FILAMENT3                  _UxGT("Filament 4")
#define MSG_MMU2_FILAMENT4                  _UxGT("Filament 5")
#define MSG_MMU2_RESET                      _UxGT("Réinit. MMU")
#define MSG_MMU2_RESETTING                  _UxGT("Réinit. MMU...")
#define MSG_MMU2_EJECT_RECOVER              _UxGT("Retrait, click")

#define MSG_MIX                             _UxGT("Mix")
#define MSG_MIX_COMPONENT                   _UxGT("Composante")
#define MSG_MIXER                           _UxGT("Mixeur")
#define MSG_GRADIENT                        _UxGT("Dégradé")
#define MSG_FULL_GRADIENT                   _UxGT("Dégradé complet")
#define MSG_TOGGLE_MIX                      _UxGT("Toggle mix")
#define MSG_CYCLE_MIX                       _UxGT("Cycle mix")
#define MSG_GRADIENT_MIX                    _UxGT("Mix dégradé")
#define MSG_REVERSE_GRADIENT                _UxGT("Inverser dégradé")
#define MSG_ACTIVE_VTOOL                    _UxGT("Active V-tool")
#define MSG_START_VTOOL                     _UxGT("Début V-tool")
#define MSG_END_VTOOL                       _UxGT("  Fin V-tool")
#define MSG_GRADIENT_ALIAS                  _UxGT("Alias V-tool")
#define MSG_RESET_VTOOLS                    _UxGT("Réinit. V-tools")
#define MSG_COMMIT_VTOOL                    _UxGT("Valider Mix V-tool")
#define MSG_VTOOLS_RESET                    _UxGT("V-tools réinit. ok")
#define MSG_START_Z                         _UxGT("Début Z")
#define MSG_END_Z                           _UxGT("  Fin Z")
#define MSG_BRICKOUT                        _UxGT("Casse-briques")
#define MSG_INVADERS                        _UxGT("Invaders")
#define MSG_SNAKE                           _UxGT("Sn4k3")
#define MSG_MAZE                            _UxGT("Labyrinthe")

#if LCD_HEIGHT >= 4
  // Up to 3 lines allowed
  #define MSG_ADVANCED_PAUSE_WAITING_1      _UxGT("Presser bouton")
  #define MSG_ADVANCED_PAUSE_WAITING_2      _UxGT("pour reprendre")
  #define MSG_PAUSE_PRINT_INIT_1            _UxGT("Parking...")
  #define MSG_FILAMENT_CHANGE_INIT_1        _UxGT("Attente filament")
  #define MSG_FILAMENT_CHANGE_INIT_2        _UxGT("pour démarrer")
  #define MSG_FILAMENT_CHANGE_INSERT_1      _UxGT("Insérer filament")
  #define MSG_FILAMENT_CHANGE_INSERT_2      _UxGT("et app. bouton")
  #define MSG_FILAMENT_CHANGE_INSERT_3      _UxGT("pour continuer...")
  #define MSG_FILAMENT_CHANGE_HEAT_1        _UxGT("Presser le bouton...")
  #define MSG_FILAMENT_CHANGE_HEAT_2        _UxGT("pr chauffer la buse")
  #define MSG_FILAMENT_CHANGE_HEATING_1     _UxGT("Buse en chauffe")
  #define MSG_FILAMENT_CHANGE_HEATING_2     _UxGT("Patienter SVP...")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1      _UxGT("Attente")
  #define MSG_FILAMENT_CHANGE_UNLOAD_2      _UxGT("retrait du filament")
  #define MSG_FILAMENT_CHANGE_LOAD_1        _UxGT("Attente")
  #define MSG_FILAMENT_CHANGE_LOAD_2        _UxGT("chargement filament")
  #define MSG_FILAMENT_CHANGE_PURGE_1       _UxGT("Attente")
  #define MSG_FILAMENT_CHANGE_PURGE_2       _UxGT("Purge filament")
  #define MSG_FILAMENT_CHANGE_CONT_PURGE_1  _UxGT("Presser pour finir")
  #define MSG_FILAMENT_CHANGE_CONT_PURGE_2  _UxGT("la purge du filament")
  #define MSG_FILAMENT_CHANGE_RESUME_1      _UxGT("Attente reprise")
  #define MSG_FILAMENT_CHANGE_RESUME_2      _UxGT("impression")
#else // LCD_HEIGHT < 4
  // Up to 2 lines allowed
  #define MSG_ADVANCED_PAUSE_WAITING_1      _UxGT("Presser pr continuer")
  #define MSG_FILAMENT_CHANGE_INIT_1        _UxGT("Patience...")
  #define MSG_FILAMENT_CHANGE_INSERT_1      _UxGT("Insérer fil.")
  #define MSG_FILAMENT_CHANGE_HEAT_1        _UxGT("Chauffer ?")
  #define MSG_FILAMENT_CHANGE_HEATING_1     _UxGT("Chauffage...")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1      _UxGT("Retrait fil...")
  #define MSG_FILAMENT_CHANGE_LOAD_1        _UxGT("Chargement...")
  #define MSG_FILAMENT_CHANGE_PURGE_1       _UxGT("Purge...")
  #define MSG_FILAMENT_CHANGE_CONT_PURGE_1  _UxGT("Terminer ?")
  #define MSG_FILAMENT_CHANGE_RESUME_1      _UxGT("Reprise...")
#endif // LCD_HEIGHT < 4

#define MSG_TMC_DRIVERS                     _UxGT("Drivers TMC")
#define MSG_TMC_CURRENT                     _UxGT("Courant driver")
#define MSG_TMC_HYBRID_THRS                 _UxGT("Seuil hybride")
#define MSG_TMC_HOMING_THRS                 _UxGT("Home sans capteur")
#define MSG_TMC_STEPPING_MODE               _UxGT("Mode pas à pas")
#define MSG_TMC_STEALTH_ENABLED             _UxGT("StealthChop activé")
#define MSG_SERVICE_RESET                   _UxGT("Réinit.")
#define MSG_SERVICE_IN                      _UxGT("  dans:")
#define MSG_BACKLASH                        _UxGT("Backlash")
#define MSG_BACKLASH_CORRECTION             _UxGT("Correction")
#define MSG_BACKLASH_SMOOTHING              _UxGT("Lissage")
