//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDTable.h>

@class LiKeyPath;

@interface RDMomentYearTable : RDTable
{
    LiKeyPath *_startDateKeyPath;
    LiKeyPath *_endDateKeyPath;
    LiKeyPath *_representativeDateKeyPath;
    LiKeyPath *_generationTypeKeyPath;
    LiKeyPath *_reverseLocationDataKeyPath;
    LiKeyPath *_reverseLocationDataIsValidKeyPath;
    LiKeyPath *_sortIndexKeyPath;
    LiKeyPath *_primaryPlaceDataKeyPath;
    LiKeyPath *_secondaryPlaceDataKeyPath;
}

+ (SEL)deletedModelIdsMulticasterSelector;
+ (SEL)updatedModelKeyPathsMulticasterSelector;
+ (SEL)createdModelMulticasterSelector;
+ (id)tableClassName;
+ (id)tableName;
+ (id)modelName;
+ (Class)modelClass;
@property(readonly, nonatomic) LiKeyPath *secondaryPlaceDataKeyPath; // @synthesize secondaryPlaceDataKeyPath=_secondaryPlaceDataKeyPath;
@property(readonly, nonatomic) LiKeyPath *primaryPlaceDataKeyPath; // @synthesize primaryPlaceDataKeyPath=_primaryPlaceDataKeyPath;
@property(readonly, nonatomic) LiKeyPath *sortIndexKeyPath; // @synthesize sortIndexKeyPath=_sortIndexKeyPath;
@property(readonly, nonatomic) LiKeyPath *reverseLocationDataIsValidKeyPath; // @synthesize reverseLocationDataIsValidKeyPath=_reverseLocationDataIsValidKeyPath;
@property(readonly, nonatomic) LiKeyPath *reverseLocationDataKeyPath; // @synthesize reverseLocationDataKeyPath=_reverseLocationDataKeyPath;
@property(readonly, nonatomic) LiKeyPath *generationTypeKeyPath; // @synthesize generationTypeKeyPath=_generationTypeKeyPath;
@property(readonly, nonatomic) LiKeyPath *representativeDateKeyPath; // @synthesize representativeDateKeyPath=_representativeDateKeyPath;
@property(readonly, nonatomic) LiKeyPath *endDateKeyPath; // @synthesize endDateKeyPath=_endDateKeyPath;
@property(readonly, nonatomic) LiKeyPath *startDateKeyPath; // @synthesize startDateKeyPath=_startDateKeyPath;
- (void).cxx_destruct;
- (void)declareProperties;
- (id)initWithTableId:(unsigned long long)arg1 tableType:(unsigned char)arg2 withLibrary:(id)arg3;
- (id)notifyUpdateKeyPathAtoms;
- (unsigned long long *)faultedKeyPath;
- (id)iLMBPropertyPaths;

@end

