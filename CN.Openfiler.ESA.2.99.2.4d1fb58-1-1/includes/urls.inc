<?php


/*
 *
 *
 * --------------------------------------------------------------------
 * Copyright (c) 2001 - 2011 Openfiler Project.
 * --------------------------------------------------------------------
 *
 * Openfiler is an Open Source SAN/NAS Appliance Software Distribution
 *
 * This file is part of Openfiler.
 *
 * Openfiler is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * Openfiler is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with Openfiler.  If not, see <http://www.gnu.org/licenses/>.
 * 
 * --------------------------------------------------------------------
 *
 *  
 */



    $C_VOLUME_GROUP_MANAGEMENT =  array("li_class"=>"volumes_group", "title"=>"卷组","url"=>"/admin/volumes_vgmanage.html");
    $C_VOLUME_PHYSICAL_MANAGEMENT = array("li_class"=>"volumes_physical","title"=>"磁盘设备","url"=>"/admin/volumes_physical.html");
    $C_VOLUME_CREATE = array("li_class"=>"volumes_create","title"=>"添加卷","url"=>"/admin/volumes_create.html");
    $C_VOLUME_ISCSI_TARGETS = array("li_class"=>"volumes_iscsi","title"=>"iSCSI目标", "url"=>"/admin/volumes_iscsi_targets.html");
    $C_VOLUME_RAID_MANAGE = array("li_class"=>"volumes_raid","title"=>"软件RAID","url"=>"/admin/volumes_raidmanage.html");
    $C_VOLUME_EXISTING = array("li_class"=>"volumes_logical","title"=>"卷管理","url"=>"/admin/volumes.html");
    $C_VOLUME_FC_TARGETS =  array("li_class"=>"volumes_iscsi","title"=>"FC Targets", "url"=>"/admin/volumes_fc_targets.html");
    $C_VOLUME_ADVANCED_ISCSI = array("li_class"=>"volumes_iscsi","title"=>"Advanced iSCSI", "url"=>"/admin/volumes_advanced_iscsi.html");
    


    $C_ACCOUNTS = array("li_class"=>"accounts_accounts","title"=>"认证", "url"=>"/admin/");
    $C_ACCOUNTS_GROUPS = array("li_class"=>"accounts_groups","title"=>"组列表", "url"=>"/admin/account_groups.html");
    $C_ACCOUNTS_USERS = array("li_class"=>"accounts_users","title"=>"用户列表", "url"=>"/admin/account_users.html");
    $C_ACCOUNTS_ADMINISTRATION = array("li_class"=>"accounts_administration","title"=>"账户管理", "url"=>"/admin/account_ldap.html");
    $C_ACCOUNTS_ADMIN_PASSWORD = array("li_class"=>"accounts_adminpassword","title"=>"系统管理员密码", "url"=>"/admin/account_adminpassword.html");

    $C_QUOTA = array("li_class"=>"quota_group","title"=>"组配额", "url"=>"/admin/quota.html");
    $C_QUOTA_USER = array("li_class"=>"quota_user","title"=>"用户配额", "url"=>"/admin/quota_user.html");
    $C_QUOTA_GUEST = array("li_class"=>"quota_guest","title"=>"来宾配额", "url"=>"/admin/quota_guest.html");
    
    
    $C_SHARES = array("li_class"=>"shares_existing","title"=>"扩展共享", "url"=>"/admin/shares.html");
    $C_SHARES_SNAPSHOTS = array("li_class"=>"shares_snapshot","title"=>"共享快照", "url"=>"/admin/shares_snapshots.html");
   
    $C_SERVICES = array("li_class"=>"services_enable_disable","title"=>"服务管理", "url"=>"/admin/services.html");
    $C_SERVICES_SMB = array("li_class"=>"services_smb","title"=>"SMB/CIFS设置", "url"=>"/admin/services_smb.html");
    $C_SERVICES_LDAP = array("li_class"=>"services_ldap","title"=>"LDAP设置", "url"=>"/admin/services_ldap.html");
    $C_SERVICES_UPS = array("li_class"=>"services_ups","title"=>"UPS设置", "url"=>"/admin/services_ups.html");
    $C_SERVICES_ISCSI_TARGET = array("li_class"=>"services_iscsi","title"=>"iSCSI目标设置", "url"=>"/admin/services_iscsi_target.html");
    $C_SERVICES_RSYNC = array("li_class"=>"services_rsync","title"=>"Rsync设置","url"=>"/admin/services_rsync.html");
    $C_SERVICES_FTP = array("li_class"=>"services_ftp", "title"=>"FTP设置", "url"=>"/admin/services_ftp.html"); 
  
    $C_STATUS = array("li_class"=>"status_system_overview","title"=>"系统概述", "url"=>"/admin/status.html");
    $C_STATUS_ISCSI = array("li_class"=>"status_system_overview","title"=>"iSCSI目标", "url"=>"/admin/status_iscsi.html");
    $C_STATUS_FC = array("li_class"=>"status_system_overview","title"=>"FC Targets", "url"=>"/admin/status_fc.html"); 

    $C_GENERAL = array("li_class"=>"system_network","title"=>"网络设置", "url"=>"/admin/system.html");
    $C_GENERAL_CLOCK = array("li_class"=>"system_clock","title"=>"时间设置", "url"=>"/admin/system_clock.html");
    $C_GENERAL_UPS = array("li_class"=>"system_ups","title"=>"UPS管理", "url"=>"/admin/system_ups.html");
    $C_GENERAL_SHUTDOWN = array("li_class"=>"system_shutdown","title"=>"关机/重启", "url"=>"/admin/system_shutdown.html");
    $C_GENERAL_NOTIFICATION = array("li_class"=>"system_notification","title"=>"警告通知", "url"=>"/admin/system_info.html");
    $C_GENERAL_UPDATE = array("li_class"=>"system_update","title"=>"系统更新", "url"=>"/admin/system_view_update.html");
    $C_GENERAL_BACKUP = array("li_class"=>"system_backup","title"=>"备份/恢复", "url"=>"/admin/system_backup.html");
    $C_GENERAL_SSH = array("li_class"=>"system_console","title"=>"终端连接", "url"=>"/admin/system_shell.html");

    $C_CLUSTER = array("li_class"=>"cluster_root","title"=>"群集","url"=>"/admin/cluster.html");

    $P_GENERAL_CHILDREN = array("C_GENERAL"=>$C_GENERAL, 
                                "C_GENERAL_CLOCK"=>$C_GENERAL_CLOCK, 
                                "C_GENERAL_UPS"=>$C_GENERAL_UPS, 
                                "C_GENERAL_SHUTDOWN"=>$C_GENERAL_SHUTDOWN, 
                                "C_GENERAL_NOTIFICATION"=>$C_GENERAL_NOTIFICATION,
                                "C_GENERAL_UPDATE"=>$C_GENERAL_UPDATE, 
                                "C_GENERAL_BACKUP"=>$C_GENERAL_BACKUP, 
                                "C_GENERAL_SSH"=>$C_GENERAL_SSH);

    $P_STATUS_CHILDREN = array("C_STATUS"=>$C_STATUS, 
                               "C_STATUS_ISCSI"=>$C_STATUS_ISCSI, 
				"C_STATUS_FC"=>$C_STATUS_FC);

  
    $P_SERVICES_CHILDREN = array("C_SERVICES"=>$C_SERVICES,
                                 "C_SERVICES_SMB"=>$C_SERVICES_SMB, 
                                 "C_SERVICES_LDAP"=>$C_SERVICES_LDAP, 
                                 "C_SERVICES_UPS"=>$C_SERVICES_UPS,
                                 "C_SERVICES_RSYNC"=>$C_SERVICES_RSYNC,
                                 "C_SERVICES_ISCSI_TARGET"=>$C_SERVICES_ISCSI_TARGET,
                                 "C_SERVICES_FTP"=>$C_SERVICES_FTP);
   
    $P_SHARES_CHILDREN = array("C_SHARES"=>$C_SHARES, 
                               "C_SHARES_SNAPSHOTS"=>$C_SHARES_SNAPSHOTS);

    $P_CLUSTER_CHILDREN = array("C_CLUSTER"=>$C_CLUSTER);
    
    $P_QUOTA_CHILDREN = array("C_QUOTA"=>$C_QUOTA, 
                              "C_QUOTA_USER"=>$C_QUOTA_USER, 
                              "C_QUOTA_GUEST"=>$C_QUOTA_GUEST); 
    


    $P_ACCOUNTS_CHILDREN = array("C_ACCOUNTS"=>$C_ACCOUNTS, 
                                 "C_ACCOUNTS_ADMINISTRATION"=>$C_ACCOUNTS_ADMINISTRATION, 
                                 "C_ACCOUNTS_USERS"=>$C_ACCOUNTS_USERS,                                     
                                 "C_ACCOUNTS_GROUPS"=>$C_ACCOUNTS_GROUPS,
                                 "C_ACCOUNTS_ADMIN_PASSWORD"=>$C_ACCOUNTS_ADMIN_PASSWORD);

    $P_VOLUMES_CHILDREN = array("C_VOLUME_EXISTING"=>$C_VOLUME_EXISTING,
                                "C_VOLUME_GROUP_MANAGEMENT"=>$C_VOLUME_GROUP_MANAGEMENT, 
                                "C_VOLUME_PHYSICAL_MANAGEMENT"=>$C_VOLUME_PHYSICAL_MANAGEMENT, 
                                "C_VOLUME_CREATE"=>$C_VOLUME_CREATE,
                                "C_VOLUME_ISCSI_TARGETS"=>$C_VOLUME_ISCSI_TARGETS,
                                "C_VOLUME_FC_TARGETS"=>$C_VOLUME_FC_TARGETS,
                                "C_VOLUME_ADVANCED_ISCSI"=>$C_VOLUME_ADVANCED_ISCSI,
                                "C_VOLUME_RAID_MANAGE"=>$C_VOLUME_RAID_MANAGE);


    $P_VOLUMES = array("li_class"=>"volumes", "title"=>"存储卷","url"=>"/admin/volumes.html","children"=>$P_VOLUMES_CHILDREN);
    $P_ACCOUNTS = array("li_class"=>"accounts","title"=>"账户","url"=>"/admin/index.html", "children"=>$P_ACCOUNTS_CHILDREN);
    $P_QUOTA = array("li_class"=>"quota","title"=>"配额","url"=>"/admin/quota.html", "children"=>$P_QUOTA_CHILDREN);
    $P_SHARES = array("li_class"=>"shares","title"=>"共享","url"=>"/admin/shares.html", "children"=>$P_SHARES_CHILDREN);
    $P_SERVICES = array("li_class"=>"services","title"=>"服务","url"=>"/admin/services.html", "children"=>$P_SERVICES_CHILDREN); 
    $P_STATUS = array("li_class"=>"status","title"=>"状态","url"=>"/admin/status.html", "children"=>$P_STATUS_CHILDREN);
    $P_GENERAL = array("li_class"=>"system", "title"=>"系统","url"=>"/admin/system.html", "children"=>$P_GENERAL_CHILDREN);
    $P_CLUSTER = array("li_class"=>"cluster", "title"=>"群集","url"=>"/admin/cluster.html","chidren"=>$P_CLUSTER_CHILDREN); 

    $T_URLS = array("P_STATUS"=>$P_STATUS, 
                    "P_GENERAL"=>$P_GENERAL, 
                    "P_VOLUMES"=>$P_VOLUMES,
                    "P_CLUSTER"=>$P_CLUSTER, 
                    "P_QUOTA"=>$P_QUOTA, 
                    "P_SHARES"=>$P_SHARES, 
                    "P_SERVICES"=>$P_SERVICES, 
                    "P_ACCOUNTS"=>$P_ACCOUNTS);
    

    function getParentTab($childKey) {
        global $T_URLS;
        foreach($T_URLS as $key => $value) {
            foreach($value as $key2 => $value2) {
                if(is_array($value2)) {
                    foreach($value2 as $key3 => $value3) {
                        if($key3 == $childKey) {
                                return array($key => $value);
                        }
                    }    
                }
            }
        }
    }

    function getTabs($tabs) {
    
        global $T_URLS;
        if (array_key_exists($tabs,  $T_URLS)) {
                $parentTab = array($tabs => $T_URLS[$tabs]);
        //we're a parent tab 
        }

        else {
                $parentTab = getParentTab($tabs);
        // we're a child tab
        }

        return $parentTab; 
            
    }

?>
