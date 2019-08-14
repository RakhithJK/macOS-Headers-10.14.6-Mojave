//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFClientInfoMutating-Protocol.h>

@class AFClientInfo, NSString;

@interface _AFClientInfoMutation : NSObject <AFClientInfoMutating>
{
    AFClientInfo *_baseModel;
    int _processIdentifier;
    NSString *_processName;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasProcessIdentifier:1;
        unsigned int hasProcessName:1;
    } _mutationFlags;
}

- (void).cxx_destruct;
- (id)generate;
- (void)setProcessName:(id)arg1;
- (void)setProcessIdentifier:(int)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

