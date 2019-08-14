//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Automator/NSCopying-Protocol.h>

@class AMType, AMWorkflowController, AMWorkflowMetaData, AMWorkflowPersonality, NSArray, NSAttributedString, NSDictionary, NSMapTable, NSMutableArray, NSString, NSURL, NSUndoManager;

@interface AMWorkflow : NSObject <NSCopying>
{
    NSString *_uuid;
    NSURL *_fileURL;
    id _actions;
    id _variables;
    id _connectors;
    AMWorkflowController *_controller;
    id _options;
    id _input;
    id _scriptingRunData;
    id _owningApplication;
    NSDictionary *_savedPropertyList;
    NSArray *_loadingErrors;
    BOOL _isBeingEdited;
    BOOL _hasUnsavedChanges;
    BOOL _isLoading;
    BOOL _workflowIsShared;
    unsigned long long _updateCount;
    id _inputType;
    id _outputType;
    id _future;
    id _future2;
    id _future3;
    id _future4;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)workflow;
+ (id)runWorkflowAtURL:(id)arg1 withInput:(id)arg2 error:(id *)arg3;
+ (id)translatedWorkflowInitializationError:(id)arg1 url:(id)arg2;
+ (id)workflowAtURL:(id)arg1 forRunning:(BOOL)arg2 remotely:(BOOL)arg3 variablesDictionary:(id)arg4 error:(id *)arg5;
+ (id)workflowWithPropertyList:(id)arg1 url:(id)arg2 forRunning:(BOOL)arg3 remotely:(BOOL)arg4 error:(id *)arg5;
+ (id)workflowAtURL:(id)arg1 forRunning:(BOOL)arg2 remotely:(BOOL)arg3 error:(id *)arg4;
@property(retain, nonatomic) NSMapTable *_loadingErrorsByAction; // @synthesize _loadingErrorsByAction=_future2;
@property unsigned long long updateCount; // @synthesize updateCount=_updateCount;
@property(retain, nonatomic, getter=_workflowMetaData, setter=_setWorkflowMetaData:) AMWorkflowMetaData *_workflowMetaData; // @synthesize _workflowMetaData=_future;
@property(retain) NSArray *loadingErrors; // @synthesize loadingErrors=_loadingErrors;
@property(getter=isBeingEdited, setter=setBeingEdited:) BOOL isBeingEdited; // @synthesize isBeingEdited=_isBeingEdited;
@property(nonatomic) BOOL hasUnsavedChanges; // @synthesize hasUnsavedChanges=_hasUnsavedChanges;
@property(retain) id scriptingRunData; // @synthesize scriptingRunData=_scriptingRunData;
@property __weak AMWorkflowController *workflowController; // @synthesize workflowController=_controller;
@property(copy) NSString *owningApplication; // @synthesize owningApplication=_owningApplication;
@property(retain, nonatomic) id input; // @synthesize input=_input;
@property(retain) NSMutableArray *connectors; // @synthesize connectors=_connectors;
@property(retain) NSMutableArray *variables; // @synthesize variables=_variables;
@property(retain) NSArray *actions; // @synthesize actions=_actions;
@property(copy) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(retain) NSDictionary *savedPropertyList; // @synthesize savedPropertyList=_savedPropertyList;
@property(copy) NSString *UUID; // @synthesize UUID=_uuid;
- (void).cxx_destruct;
- (void)_thirdPartyActionsAllowedChanged:(id)arg1;
- (void)_reloadThirdPartyActions;
- (void)reloadActionsForIdentifiers:(id)arg1;
- (void)_reloadActionWithoutNotifying:(id)arg1;
- (id)_loadedActionOrPlaceholderForActionDictionary:(id)arg1 isViewVisible:(id)arg2 isTigerWorkflow:(BOOL)arg3 error:(id *)arg4;
- (id)preflightForRunningWithModeReturningError:(unsigned long long)arg1 remotely:(BOOL)arg2;
@property(readonly, nonatomic) NSDictionary *_warningMessageDictOnRun;
- (id)_suggestedTestingActionBundleID;
@property(readonly, nonatomic) NSUndoManager *_undoManager;
- (void)__parametersKeyPathChanged;
- (void)_parametersKeyPathChanged;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)unregisterObservingForAction:(id)arg1;
- (void)registerObservingForAction:(id)arg1;
- (id)connectorsFromAction:(id)arg1;
- (id)connectorsToAction:(id)arg1;
- (void)removeConnectionsForAction:(id)arg1;
- (void)removeOutputConnectionsForAction:(id)arg1;
@property(readonly, nonatomic) BOOL _shouldShowWorkflowHeaderOutputConnection;
@property(readonly, nonatomic) AMType *_automaticallyGuessedInputType;
- (BOOL)_firstActionToConnectToHeaderViewHasPotentialConnectionToInputType:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *_workflowOutputTypeNames;
- (id)_lastActionProvidingOutput;
- (id)_actionToConnectToHeaderViewForDrawingConnectionPoint:(BOOL)arg1;
- (void)removeInputConnectionsForAction:(id)arg1;
- (void)evaluateConnectionForActionConnector:(id)arg1;
- (void)displayInheritedTypesForAction:(id)arg1 fromAction:(id)arg2;
- (void)connectAction:(id)arg1 toAction:(id)arg2;
- (void)connectActionToFollowing:(id)arg1;
@property(readonly, copy, nonatomic) NSString *_propertyListDigest;
- (BOOL)isGenericType:(id)arg1;
- (id)description;
- (BOOL)containsVariable:(id)arg1;
- (void)removeVariable:(id)arg1;
- (id)loadVariablesFromCustomAction:(id)arg1;
- (void)loadVariablesFromWorkflowDocument:(id)arg1;
- (void)_loadVariableFromPropertyListFromWorkflowDocument:(id)arg1;
- (void)updateVariableChildren;
- (void)createNewNameForVariable:(id)arg1;
- (id)addVariable:(id)arg1;
- (id)addVariableWithPropertyList:(id)arg1;
- (BOOL)wouldAddVariable:(id)arg1;
- (id)valueForVariableWithName:(id)arg1;
- (BOOL)setValue:(id)arg1 forVariableWithName:(id)arg2;
- (void)variableWasEdited:(id)arg1;
- (id)variablesMatchingIdentifier:(id)arg1;
@property(readonly, nonatomic) NSArray *variableNames;
- (id)variableNameForUUID:(id)arg1;
- (id)variableWithUUID:(id)arg1;
- (id)variableWithName:(id)arg1;
- (unsigned long long)displayedIndexOfAction:(id)arg1;
- (id)lastActionWithDefinedOutputBeforeIndex:(unsigned long long)arg1;
- (id)nextEnabledActionAfterIndex:(unsigned long long)arg1;
- (id)lastEnabledActionBeforeIndex:(unsigned long long)arg1;
- (void)activated;
- (void)opened;
- (void)parametersUpdated;
- (void)updateParameters;
- (void)changeUpdateCount:(unsigned long long)arg1;
@property(readonly, nonatomic) BOOL isUpdatingActions;
- (void)actionWasRenamed:(id)arg1;
- (void)actionWasModified:(id)arg1;
- (void)actionDidChangeIgnoringInput:(id)arg1;
- (void)actionDidChangeEnabledState:(id)arg1;
- (void)actionDidChangeOutputType:(id)arg1;
- (void)actionDidChangeInputType:(id)arg1;
- (void)moveActionsAtIndexes:(id)arg1 toIndexes:(id)arg2;
- (void)moveActions:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)moveActionAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)_removeActionsInRange:(struct _NSRange)arg1;
- (void)removeActions:(id)arg1;
- (void)removeAction:(id)arg1;
- (void)_removeActionWithoutNotifying:(id)arg1;
- (void)_removeAction:(id)arg1;
- (void)_clearLoadingErrorsForAction:(id)arg1;
- (id)_addActionWithBundleIdentifier:(id)arg1;
- (void)finishAddingAction:(id)arg1;
- (void)insertActions:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertAction:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_insertActionWithoutNotifying:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addActions:(id)arg1;
- (void)addAction:(id)arg1;
- (id)actionForUUID:(id)arg1;
@property(readonly, nonatomic) NSAttributedString *richTextOutput;
- (void)reset;
@property(readonly, nonatomic) BOOL canRun;
- (BOOL)writeToURL:(id)arg1 error:(id *)arg2;
- (id)fileWrapperForWritingReturningSavedPropertyList:(id *)arg1 documentType:(id)arg2 originalContentsFileWrapper:(id)arg3 error:(id *)arg4;
- (id)_propertyListUpdatingParameters:(BOOL)arg1 withError:(id *)arg2;
- (id)propertyListReturningError:(id *)arg1;
- (void)loadConnectors:(id)arg1;
- (BOOL)readFromURL:(id)arg1 variablesDictionary:(id)arg2 error:(id *)arg3;
- (BOOL)readFromFileWrapper:(id)arg1 variablesDictionary:(id)arg2 error:(id *)arg3;
- (BOOL)readFromPropertyList:(id)arg1 variablesDictionary:(id)arg2 error:(id *)arg3;
- (BOOL)checkDocumentVersion:(id)arg1;
@property(retain, nonatomic, getter=_workflowPersonality, setter=_setWorkflowPersonality:) AMWorkflowPersonality *_workflowPersonality;
- (void)_configureForWorkflowPersonality:(id)arg1 templateWorkflowMetaData:(id)arg2;
@property(readonly, nonatomic) NSString *_headerInputType;
@property(readonly, nonatomic) NSString *version;
@property(readonly, nonatomic) NSArray *outputTypes;
@property(readonly, nonatomic) NSArray *inputTypes;
@property(readonly, nonatomic) id output;
@property(retain, nonatomic) NSMutableArray *mutableActions;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithFileWrapper:(id)arg1 error:(id *)arg2;
- (id)initWithPropertyList:(id)arg1 error:(id *)arg2;
- (id)initWithContentsOfURL:(id)arg1 variablesDictionary:(id)arg2 error:(id *)arg3;
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;
- (id)init;
- (BOOL)validateWorkflowWithURL:(id)arg1 forRunning:(BOOL)arg2 remotely:(BOOL)arg3 initializationError:(id)arg4 returningError:(id *)arg5;

@end

