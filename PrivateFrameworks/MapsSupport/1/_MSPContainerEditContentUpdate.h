//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapsSupport/_MSPContainerEdit.h>

#import <MapsSupport/MSPContainerEditContentUpdate-Protocol.h>

@class NSString;
@protocol MSPImmutableObject, MSPMutableObject;

__attribute__((visibility("hidden")))
@interface _MSPContainerEditContentUpdate : _MSPContainerEdit <MSPContainerEditContentUpdate>
{
    id <MSPMutableObject> _updatedObject;
    id <MSPImmutableObject> _updatedImmutableObject;
}

@property(readonly, nonatomic) id <MSPImmutableObject> updatedImmutableObject; // @synthesize updatedImmutableObject=_updatedImmutableObject;
@property(readonly, nonatomic) id <MSPMutableObject> updatedObject; // @synthesize updatedObject=_updatedObject;
- (void).cxx_destruct;
- (void)useImmutableObjectsFromMap:(id)arg1 intermediateMutableObjectTransferBlock:(CDUnknownBlockType)arg2;
@property(readonly, copy) NSString *description;
- (id)initWithUpdatedImmutableObject:(id)arg1;
- (id)initWithUpdatedObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

