SUBDIRS = images scripts languages styles

installdir = $(PRIVATE_HTTPDDIR)

install_DATA =	channels.js \
		extentions.txt \
		favicon.ico \
		index.html \
		prototype.js \
		robots.txt \
		lcd4linux.html \
		Y_About.yhtm \
		Y_Baselib.js \
		Y_Blank.yhtm \
		Y_Blocks.txt \
		Y_Boxcontrol_Bouquet_Editor_Edit.yhtm \
		Y_Boxcontrol_Bouquet_Editor_Main.yhtm \
		Y_Boxcontrol_Bouquetlist.yhtm \
		Y_Boxcontrol_Bouquets.yhtm \
		Y_Boxcontrol_Channellist.yhtm \
		Y_Boxcontrol_Menue.yhtm \
		Y_Boxcontrol_Messages.yhtm \
		Y_Dist.css \
		Y_Dyn_Pages.yhtm \
		Y_EPG.js \
		Y_EPG_Plus.yhtm \
		Y_Ext_Menue.yhtm \
		Y_Ext_Settings.yhtm \
		Y_Ext_Uninstall.yhtm \
		Y_Ext_Update.js \
		Y_Ext_Update_refresh.yhtm \
		Y_Ext_Update.yhtm \
		Y_Info_Help.yhtm \
		Y_Info_Menue.yhtm \
		Y_Info_Updates.yhtm \
		Y_Live_EPG_Info.yhtm \
		Y_Live_EPG.yhtm \
		Y_Main.css \
		Y_Menue.yhtm \
		Y_neutrino_Blocks.txt \
		Y_Refresh.yhtm \
		Y_Settings_automount_list.yhtm \
		Y_Settings_automount.yhtm \
		Y_Settings_Backup.yhtm \
		Y_Settings_buttons.yhtm \
		Y_Settings_glcd.yhtm \
		Y_Settings_lcd.yhtm \
		Y_Settings_Menue.yhtm \
		Y_Settings_mount_list.yhtm \
		Y_Settings_mount.yhtm \
		Y_Settings_neutrino_forms.yhtm \
		Y_Settings_nhttpd.yhtm \
		Y_Settings_personalize.yhtm \
		Y_Settings_umount_list.yhtm \
		Y_Settings_video_audio.yhtm \
		Y_Settings_wol.yhtm \
		Y_Settings_xmltv.yhtm \
		Y_Settings_yWeb.yhtm \
		Y_Settings_zapit.yhtm \
		Y_StreamInfo.yhtm \
		Y_Timer_Edit.yhtm \
		Y_Timer_List.yhtm \
		Y_Tools_Boxcontrol.yhtm \
		Y_Tools_Check_Install.yhtm \
		Y_Tools_Cmd.yhtm \
		Y_Tools_Glcd_Screenshot.yhtm \
		Y_Tools_Info_Menue.yhtm \
		Y_Tools_Installer.yhtm \
		Y_Tools_Menue.yhtm \
		Y_Tools_Rcsim.yhtm \
		Y_Tools_Screenshot.yhtm  \
		Y_Tools_tvshot.yhtm \
		Y_User.css \
		Y_Version.txt \
		Y_Wait.yhtm \
		Y_yweb.js

# file manager
install_DATA +=	accordion.js \
		effects.js \
		Y_Filemgr.yhtm \
		Y_Filemgr_Edit.yhtm \
		Y_Filemgr_blocks.txt

install-data-hook:
	@# Badass hack, I know. If anyone knows a better way -- please send patch!
	find $(DESTDIR)$(PRIVATE_HTTPDDIR)/ -type f -print0 | xargs --no-run-if-empty -0 \
		sed -i \
			-e 's|%(CONFIGDIR)|$(CONFIGDIR)|g' \
			-e 's|%(ZAPITDIR)|$(ZAPITDIR)|g' \
			-e 's|%(DATADIR)|$(DATADIR)|g' \
			-e 's|%(DATADIR_VAR)|$(DATADIR_VAR)|g' \
			-e 's|%(CONTROLDIR)|$(CONTROLDIR)|g' \
			-e 's|%(CONTROLDIR_VAR)|$(CONTROLDIR_VAR)|g' \
			-e 's|%(FONTDIR)|$(FONTDIR)|g' \
			-e 's|%(FONTDIR_VAR)|$(FONTDIR_VAR)|g' \
			-e 's|%(LIBDIR)|$(LIBDIR)|g' \
			-e 's|%(GAMESDIR)|$(GAMESDIR)|g' \
			-e 's|%(ICONSDIR_VAR)|$(ICONSDIR_VAR)|g' \
			-e 's|%(LOCALEDIR)|$(LOCALEDIR)|g' \
			-e 's|%(LOCALEDIR_VAR)|$(LOCALEDIR_VAR)|g' \
			-e 's|%(PLUGINDIR_VAR)|$(PLUGINDIR_VAR)|g' \
			-e 's|%(LUAPLUGINDIR)|$(LUAPLUGINDIR)|g' \
			-e 's|%(LUAPLUGINDIR_VAR)|$(LUAPLUGINDIR_VAR)|g' \
			-e 's|%(THEMESDIR)|$(THEMESDIR)|g' \
			-e 's|%(THEMESDIR_VAR)|$(THEMESDIR_VAR)|g' \
			-e 's|%(WEBRADIODIR)|$(WEBRADIODIR)|g' \
			-e 's|%(WEBRADIODIR_VAR)|$(WEBRADIODIR_VAR)|g' \
			-e 's|%(LOGODIR)|$(LOGODIR)|g' \
			-e 's|%(LOGODIR_VAR)|$(LOGODIR_VAR)|g' \
			-e 's|%(LCD4L_ICONSDIR)|$(LCD4L_ICONSDIR)|g' \
			-e 's|%(LCD4L_ICONSDIR_VAR)|$(LCD4L_ICONSDIR_VAR)|g' \
			-e 's|%(PRIVATE_HTTPDDIR)|$(PRIVATE_HTTPDDIR)|g' \
			-e 's|%(PUBLIC_HTTPDDIR)|$(PUBLIC_HTTPDDIR)|g' \
			-e 's|%(HOSTED_HTTPDDIR)|$(HOSTED_HTTPDDIR)|g' \
			-e 's|%(FLAGDIR)|$(FLAGDIR)|g' \
	;
