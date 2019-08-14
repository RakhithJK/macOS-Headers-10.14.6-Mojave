//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFExperimentGroupMutating-Protocol.h>

@class AFExperimentGroup, NSDictionary, NSString;

@interface _AFExperimentGroupMutation : NSObject <AFExperimentGroupMutating>
{
    AFExperimentGroup *_baseModel;
    NSString *_identifier;
    unsigned long long _allocation;
    NSDictionary *_properties;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasIdentifier:1;
        unsigned int hasAllocation:1;
        unsigned int hasProperties:1;
    } _mutationFlags;
}

- (void).cxx_destruct;
- (id)generate;
- (void)setProperties:(id)arg1;
- (void)setAllocation:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

