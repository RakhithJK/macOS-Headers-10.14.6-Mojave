//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXVersionLocationAction.h"

@class NSArray;

@interface IPXResetVersionLocationAction : IPXVersionLocationAction
{
    NSArray *_targetLocations;
}

@property(retain) NSArray *targetLocations; // @synthesize targetLocations=_targetLocations;
- (void).cxx_destruct;
- (id)progressMessageForUndo;
- (id)progressMessageForExecution;
- (id)actionName;
- (void)_loadTargetLocations;
- (id)targetLocationForVersionAtIndex:(unsigned long long)arg1;
- (long long)messageTracerAction;
- (id)modelProperties;
- (void)performAction:(CDUnknownBlockType)arg1;

@end

