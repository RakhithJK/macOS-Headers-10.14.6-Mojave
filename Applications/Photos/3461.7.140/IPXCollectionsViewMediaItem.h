//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Mondrian/MOMediaRedRockItem.h>

#import "IPXCollectionsViewMediaItem-Protocol.h"

@class NSString;
@protocol IPXCollectionsViewContentObject;

@interface IPXCollectionsViewMediaItem : MOMediaRedRockItem <IPXCollectionsViewMediaItem>
{
    id <IPXCollectionsViewContentObject> _contentObject;
}

+ (id)mediaItemForContentObject:(id)arg1;
@property(retain) id <IPXCollectionsViewContentObject> contentObject; // @synthesize contentObject=_contentObject;
- (void).cxx_destruct;
- (id)initWithContentObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

