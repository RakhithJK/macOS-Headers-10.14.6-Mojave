//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDModel.h>

@class RDFaceGroupTable;

@interface RDFaceGroupModel : RDModel
{
}

+ (Class)tableClass;
+ (id)localIdentifierCode;
@property(nonatomic) long long personBuilderState;
@property(nonatomic) long long representativeFaceId;
@property(nonatomic) long long faceGroupType;
@property(nonatomic) long long personId;
@property(readonly, nonatomic) RDFaceGroupTable *table;

@end

