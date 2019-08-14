//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TUMetadataCache;

@interface TUMetadataClientController : NSObject
{
    TUMetadataCache *_metadataCache;
}

+ (id)sharedInstance;
@property(retain, nonatomic) TUMetadataCache *metadataCache; // @synthesize metadataCache=_metadataCache;
- (void).cxx_destruct;
- (void)updateMetadataForDestinationID:(id)arg1;
- (void)updateMetadataForRecentCalls:(id)arg1;
- (id)_metadataDestinationIdForSearchItem:(id)arg1;
- (id)directoryLabelForSearchItem:(id)arg1;
- (id)locationForSearchItem:(id)arg1;
- (id)suggestionForSearchItem:(id)arg1;
- (id)directoryLabelForDestinationID:(id)arg1;
- (id)locationForDestinationID:(id)arg1;
- (id)suggestionForDestinationID:(id)arg1;
- (id)init;

@end

