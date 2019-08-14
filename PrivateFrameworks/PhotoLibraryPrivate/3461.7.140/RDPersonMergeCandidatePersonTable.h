//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDTable.h>

@class LiKeyPath;

@interface RDPersonMergeCandidatePersonTable : RDTable
{
    LiKeyPath *_personIdKeyPath;
    LiKeyPath *_mergeCandidatePersonIdKeyPath;
}

+ (id)tableClassName;
+ (id)tableName;
+ (id)modelName;
+ (Class)modelClass;
@property(readonly, nonatomic) LiKeyPath *mergeCandidatePersonIdKeyPath; // @synthesize mergeCandidatePersonIdKeyPath=_mergeCandidatePersonIdKeyPath;
@property(readonly, nonatomic) LiKeyPath *personIdKeyPath; // @synthesize personIdKeyPath=_personIdKeyPath;
- (void).cxx_destruct;
- (void)declareProperties;
- (id)initWithTableId:(unsigned long long)arg1 tableType:(unsigned char)arg2 withLibrary:(id)arg3;
- (unsigned long long)saveOrder;
- (id)notifyUpdateKeyPathAtoms;
- (unsigned long long *)faultedKeyPath;

@end

