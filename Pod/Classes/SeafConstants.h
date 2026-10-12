//
//  SeafConstants.h
//  seafile
//
//  Created by System on 2025/3/11.
//  Copyright (c) 2025 Seafile Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

#define SEAFILE_SUITE_NAME @"group.space.drive.DriveSpace"
#define APP_ID @"space.drive.DriveSpace"

// Posted by the SDK after a change the Files app should learn about. The
// main app forwards it to the account's File Provider domain; extensions
// post it too but have no observer. object: the SeafConnection.
#define SeafFileProviderShouldSignalNotification @"SeafFileProviderShouldSignalNotification"
#define SeafFileProviderSignalTypeKey @"type"          // SeafFileProviderSignalTypeWorkingSet | SeafFileProviderSignalTypeRoot | SeafFileProviderSignalTypeAccount
#define SeafFileProviderSignalRepoIdKey @"repoId"      // optional
#define SeafFileProviderSignalTypeWorkingSet @"workingSet"
#define SeafFileProviderSignalTypeRoot @"root"
#define SeafFileProviderSignalTypeAccount @"account"   // account info (display name) fetched or changed; no content change