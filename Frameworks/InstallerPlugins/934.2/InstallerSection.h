//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IFDInstallController, IFDocument, InstallerPane, InstallerState, NSBundle, NSMutableDictionary, NSString, NSWindow;
@protocol InstallerSectionController;

@interface InstallerSection : NSObject
{
    InstallerPane *firstPane;
    struct InstallerSection_Private *_private;
}

@property(readonly) InstallerState *installerState;
- (id)sharedDictionary;
- (BOOL)gotoPane:(id)arg1;
@property(readonly) InstallerPane *activePane;
- (void)didLoadMainNib;
- (void)willLoadMainNib;
@property(readonly) BOOL shouldLoad;
@property(readonly) InstallerPane *firstPane;
@property(readonly) NSString *title;
@property(readonly) NSBundle *bundle;
- (void)awakeFromNib;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)didExitPane:(id)arg1 inDirection:(long long)arg2;
- (void)willExitPane:(id)arg1 inDirection:(long long)arg2;
- (BOOL)shouldExitPane:(id)arg1 inDirection:(long long)arg2;
- (void)didEnterPane:(id)arg1 inDirection:(long long)arg2;
- (void)willEnterPane:(id)arg1 inDirection:(long long)arg2;
- (id)nextPaneForActivePane:(id)arg1;
- (void)setFirstPane:(id)arg1;
@property(readonly) BOOL _loadMainNib;
@property(readonly) IFDInstallController *installController;
@property(readonly) IFDocument *distribution;
@property(readonly) BOOL _loaded;
@property(readonly) BOOL _loading;
@property(readonly) NSObject<InstallerSectionController> *_sectionController;
- (void)_setSectionController:(id)arg1;
- (void)unloadResources;
- (void)closeWindow:(id)arg1;
@property(readonly) NSWindow *window;
- (id)localizedFormattedStringForKey:(id)arg1;
- (id)localizedFormattedStringForKey:(id)arg1 withArguments:(struct __va_list_tag [1])arg2;
@property(readonly) NSMutableDictionary *privateSharedDictionary;
- (id)initWithBundle:(id)arg1;

@end

