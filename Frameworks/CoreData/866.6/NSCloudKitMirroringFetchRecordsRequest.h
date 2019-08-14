//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreData/NSCloudKitMirroringImportRequest.h>

@class NSArray, NSDictionary;

@interface NSCloudKitMirroringFetchRecordsRequest : NSCloudKitMirroringImportRequest
{
    NSArray *_objectIDsToFetch;
    NSDictionary *_entityNameToAttributesToFetch;
    NSDictionary *_entityNameToAttributeNamesToFetch;
    BOOL _editable;
}

@property(copy, nonatomic) NSArray *objectIDsToFetch; // @synthesize objectIDsToFetch=_objectIDsToFetch;
- (BOOL)validateForUseWithStore:(id)arg1 error:(id *)arg2;
- (void)throwNotEditable:(SEL)arg1;
- (BOOL)_isEditable;
- (void)setEntityNameToAttributeNamesToFetch:(id)arg1;
- (void)setEntityNameToAttributesToFetch:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *entityNameToAttributesToFetch;
- (id)_entityNameToAttributeNamesToFetch;
- (void)dealloc;
- (id)initWithOptions:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

