//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDModel.h>

@class NSData, NSNumber, NSString, RDDetectedFaceExternalTable;

@interface RDDetectedFaceExternal : RDModel
{
}

+ (Class)tableClass;
@property(readonly, copy, nonatomic) NSData *serviceData;
@property(readonly, copy, nonatomic) NSString *publicationUID;
@property(readonly, copy, nonatomic) NSString *versionUuid;
@property(readonly, copy, nonatomic) NSString *albumUuid;
@property(readonly, copy, nonatomic) NSNumber *detectedFaceId;
@property(readonly, copy, nonatomic) NSString *serviceKey;
@property(readonly, nonatomic) RDDetectedFaceExternalTable *table;

@end

