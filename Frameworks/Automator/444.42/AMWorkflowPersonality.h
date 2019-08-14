//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMPluginHeaderViewController, AMTemplateChooserItem, AMWorkflowMetaData, NSArray, NSDictionary, NSImage, NSString;

@interface AMWorkflowPersonality : NSObject
{
    NSDictionary *_settingsDictionary;
    AMTemplateChooserItem *_templateChooserItem;
}

+ (id)workflowPersonalityForTypeIdentifier:(id)arg1;
+ (id)workflowPersonalities;
+ (id)workflowPersonalitiesByIdentifier;
+ (void)_instantiateWorkflowPersonalitiesIfNeeded;
+ (id)applicationWorkflowPersonality;
+ (id)generalWorkflowPersonality;
- (void).cxx_destruct;
- (BOOL)installationCompleteForWorkflowReturningShowCompleted:(id)arg1 atURL:(id)arg2;
@property(readonly, nonatomic) BOOL allowsRevealInAutomatorOnInstallation;
@property(readonly, nonatomic) NSArray *templateChooserItems;
@property(readonly, nonatomic) AMPluginHeaderViewController *pluginHeaderViewController;
@property(readonly, nonatomic) NSString *headerViewString;
@property(readonly, nonatomic) AMWorkflowMetaData *defaultWorkflowMetaData;
@property(readonly, nonatomic) Class workflowMetaDataClass;
- (BOOL)canSaveWorkflow:(id)arg1 atURL:(id)arg2 forInstallation:(BOOL)arg3 error:(id *)arg4;
- (id)infoPlistForWorkflowMetaData:(id)arg1 error:(id *)arg2;
- (BOOL)finishSavingWorkflow:(id)arg1 forOperation:(unsigned long long)arg2 atURL:(id)arg3 error:(id *)arg4;
- (BOOL)updateFileWrapper:(id)arg1 forWorkflowMetaData:(id)arg2 documentType:(id)arg3 error:(id *)arg4;
@property(readonly, nonatomic) BOOL hasHeaderView;
- (id)templateDescription;
- (BOOL)shouldShowInTemplates;
@property(readonly, copy, nonatomic) NSString *installationAccessoryViewNibName;
- (id)infoStringForCompleteInstallationWithMetaData:(id)arg1;
- (id)infoStringForInitialInstallationWithMetaData:(id)arg1;
@property(readonly, nonatomic) BOOL showInTitlebar;
@property(readonly, nonatomic) NSImage *imageRepresentation;
@property(readonly, copy, nonatomic) NSString *unlocalizedWorkflowType;
@property(readonly, copy, nonatomic) NSString *headerInputType;
@property(readonly, nonatomic) BOOL allowsRenaming;
@property(readonly, copy, nonatomic) NSString *libraryDirectoryPathComponent;
- (id)parentDirectoryURLCreatingIfNecessary:(BOOL)arg1 error:(id *)arg2;
@property(readonly, copy, nonatomic) NSString *extension;
@property(readonly, copy, nonatomic) NSString *displayLabel;
@property(readonly, copy, nonatomic) NSString *disableWarningDefaultsKey;
@property(readonly, copy, nonatomic) NSString *documentType;
@property(readonly, copy, nonatomic) NSString *workflowTypeIdentifier;
@property(readonly, nonatomic) BOOL isPluginType;
@property(readonly, nonatomic) NSDictionary *settingsDictionary;
- (id)init;
@property(readonly, nonatomic) NSDictionary *personalitySettingsDictionary;
- (id)_createDefaultPersonalitySettingsDictionary;

@end

