//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IOpenSaveObjectController.h"

#import "TOpenPanelCallbacks-Protocol.h"

@class TOpenPanel;

@interface TChooseObjectController : IOpenSaveObjectController <TOpenPanelCallbacks>
{
    TOpenPanel *_choosePanel;
}

- (void)dealloc;
- (void)openPanelDidEnd:(id)arg1 returnCode:(long long)arg2;
- (void)run;
- (_Bool)validateNode:(const struct TFENode *)arg1;
- (_Bool)shouldEnableNode:(const struct TFENode *)arg1;
- (BOOL)panel:(id)arg1 shouldEnableURL:(id)arg2;
- (void)getSelectedNodes:(struct TFENodeVector *)arg1;
- (void)setAccessoryView:(id)arg1;
- (void)setOptions:(int)arg1;
- (int)options;
- (id)panel;
- (int)defaultOptions;
- (id)init;

@end

