//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXButtonComponentActionProvider-Protocol.h>

@class NSString, SXAction;

@interface SXButtonComponentActionProvider : NSObject <SXButtonComponentActionProvider>
{
    SXAction *_action;
}

@property(readonly, nonatomic) SXAction *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (id)buttonAction;
- (id)initWithAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

