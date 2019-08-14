//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TScriptableWindowController.h"

#import "TNodeObserverProtocol-Protocol.h"

@class NSStackView, NSString, TPreviewOptions, TUpdateLayerView;

@interface TPreviewOptionsWindowController : TScriptableWindowController <TNodeObserverProtocol>
{
    struct TString _currentTypeUTI;
    struct TFENode _currentNode;
    NSStackView *_stackView;
    struct TNSRef<NSMutableArray<TPreviewOptionsGroupViewController *>, void> _groupControllers;
    struct TNSRef<TPreviewOptions, void> _currentOptions;
    struct TNSRef<TPreviewOptionsController, void> _optionsController;
    struct TKeyValueObserver _currentNodeObserver;
    struct shared_ptr<TNodeObserverCocoaBridge> _nodeObserver;
    TUpdateLayerView *_quickActionsContainer;
}

+ (void)updateWithNode:(const struct TFENode *)arg1;
+ (void)toggleWindowVisibility:(const struct TFENode *)arg1;
+ (_Bool)isWindowVisible;
+ (id)previewOptionsWindowController;
@property(retain, nonatomic) TUpdateLayerView *quickActionsContainer; // @synthesize quickActionsContainer=_quickActionsContainer;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)nodeObserver:(struct TNodeObserver *)arg1 nodeChanged:(const struct TFENode *)arg2 inObservedNode:(const struct TFENode *)arg3 property:(unsigned int)arg4;
- (void)windowDidMove:(id)arg1;
- (void)windowDidLoad;
- (void)didChangeCurrentOptions;
@property(retain, nonatomic) TPreviewOptions *currentOptions; // @dynamic currentOptions;
- (id)controllersForOptions:(id)arg1;
@property(nonatomic) struct TFENode currentNode; // @dynamic currentNode;
@property(nonatomic) struct TString currentTypeUTI; // @dynamic currentTypeUTI;
- (id)windowTitle;
- (void)aboutToTearDown;
- (id)windowNibName;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

