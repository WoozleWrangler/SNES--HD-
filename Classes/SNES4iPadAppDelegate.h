//
//  SNES4iPadAppDelegate.h
//  SNES4iPad
//
//  Created by Yusef Napora on 5/10/10.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import <UIKit/UIKit.h>


@class EmulationViewController;
@class RomSelectionViewController;
@class RomDetailViewController;
@class SettingsViewController;
@class ControlPadConnectViewController;
@class ControlPadManager;


@interface SNES4iPadAppDelegate : NSObject <UIApplicationDelegate> {
    
    UIWindow *window;
    
    UISplitViewController *splitViewController;
    
	EmulationViewController *emulationViewController;
    RomSelectionViewController *romSelectionViewController;
    RomDetailViewController *romDetailViewController;
	SettingsViewController *settingsViewController;
	ControlPadConnectViewController *controlPadConnectViewController;
	ControlPadManager *controlPadManager;
	
	NSString *romDirectoryPath, *saveDirectoryPath, *snapshotDirectoryPath;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet UISplitViewController *splitViewController;
@property (nonatomic, retain) IBOutlet RomSelectionViewController *romSelectionViewController;
@property (nonatomic, retain) IBOutlet RomDetailViewController *romDetailViewController;
@property (nonatomic, retain) SettingsViewController *settingsViewController;
@property (nonatomic, retain) ControlPadConnectViewController *controlPadConnectViewController;
@property (nonatomic, retain) ControlPadManager *controlPadManager;

@property (nonatomic, retain) EmulationViewController *emulationViewController;

@property (nonatomic, readonly) NSString *romDirectoryPath;
@property (nonatomic, readonly) NSString *saveDirectoryPath;
@property (nonatomic, readonly) NSString *snapshotDirectoryPath;

- (void) showEmulator:(BOOL)showOrHide;
- (void) showEmulationMenu:(BOOL)showOrHide;
@end

extern SNES4iPadAppDelegate *AppDelegate();