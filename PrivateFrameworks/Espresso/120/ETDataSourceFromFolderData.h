//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Espresso/ETDataSource-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface ETDataSourceFromFolderData : NSObject <ETDataSource>
{
    BOOL _balanceClassesForTraining;
    int _numberOfClasses;
    NSString *_imagesDir;
    NSMutableDictionary *_folderToImages;
    NSArray *_imageFileNames;
    NSMutableArray *_classNames;
    NSMutableDictionary *_pathToClassIndex;
}

@property(retain, nonatomic) NSMutableDictionary *pathToClassIndex; // @synthesize pathToClassIndex=_pathToClassIndex;
@property(retain, nonatomic) NSMutableArray *classNames; // @synthesize classNames=_classNames;
@property(retain, nonatomic) NSArray *imageFileNames; // @synthesize imageFileNames=_imageFileNames;
@property(retain, nonatomic) NSMutableDictionary *folderToImages; // @synthesize folderToImages=_folderToImages;
@property(retain, nonatomic) NSString *imagesDir; // @synthesize imagesDir=_imagesDir;
@property BOOL balanceClassesForTraining; // @synthesize balanceClassesForTraining=_balanceClassesForTraining;
@property int numberOfClasses; // @synthesize numberOfClasses=_numberOfClasses;
- (void).cxx_destruct;
- (int)numberOfDataPoints;
- (id)dataPointAtIndex:(int)arg1;
- (struct vImage_Buffer)bufferWithPath:(id)arg1;
- (id)initWithFolder:(id)arg1 balanceClassesForTraining:(BOOL)arg2;

@end

