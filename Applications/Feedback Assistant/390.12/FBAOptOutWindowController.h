//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSResponder.h>

@interface FBAOptOutWindowController : NSResponder
{
    CDUnknownBlockType _completionHandler;
}

@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (void)sheetDidEnd:(id)arg1 returnCode:(unsigned long long)arg2 contextInfo:(void *)arg3;
- (void)beginSheetModalForWindow:(id)arg1 gathering:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)alertForGathering;
- (id)alertForMissing;

@end

