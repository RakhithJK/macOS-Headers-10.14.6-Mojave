//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSDAnnotationHosting-Protocol.h>

@class NSDate, NSString, TSDCommentStorage, TSKAnnotationAuthor, TSWPChange;
@protocol TSKModel;

@interface TSWPChangeDetails : NSObject <TSDAnnotationHosting>
{
    NSString *mChangeString;
    id <TSKModel> model;
    TSWPChange *_change;
}

@property(retain, nonatomic) TSWPChange *change; // @synthesize change=_change;
@property(nonatomic) id <TSKModel> model; // @synthesize model;
- (void)commitText:(id)arg1;
@property(readonly, nonatomic) int annotationDisplayStringType;
@property(readonly, nonatomic) int annotationType;
@property(readonly, nonatomic) NSString *changeTrackingString;
@property(readonly, nonatomic) NSDate *date;
@property(retain, nonatomic) TSKAnnotationAuthor *author;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqualToChangeDetails:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithChange:(id)arg1 changeString:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) TSDCommentStorage *storage;
@property(readonly) Class superclass;

@end

