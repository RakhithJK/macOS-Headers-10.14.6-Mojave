//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DCInputEventManager, DCPreferenceController;

@interface DCWorkspace : NSObject
{
    DCInputEventManager *_inputEventManager;
    DCPreferenceController *_preferenceController;
}

+ (void)run;
+ (id)sharedManager;
@property(retain, nonatomic) DCPreferenceController *preferenceController; // @synthesize preferenceController=_preferenceController;
@property(retain, nonatomic) DCInputEventManager *inputEventManager; // @synthesize inputEventManager=_inputEventManager;
- (void).cxx_destruct;
- (void)_hideMenuExtra;
- (void)_showMenuExtra;
- (void)menuExtraSettingChanged;
- (void)_updateMenuExtra:(BOOL)arg1;
- (void)handleUpdateMenuExtraEnabledNotification:(id)arg1;
- (void)handleUpdateDwellActionNotification:(id)arg1;
- (void)_dwellSettingsChanged:(id)arg1;
- (void)stop;
- (void)run;

@end

