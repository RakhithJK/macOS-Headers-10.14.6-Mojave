//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityPerformance/NSCopying-Protocol.h>

@class NSDate, NSSet, NSString;

@interface AXPSignpostParserConfiguration : NSObject <NSCopying>
{
    NSSet *_subsystemCategoryFilters;
    NSDate *_beginTime;
    NSDate *_endTime;
    NSSet *_nameFilters;
    NSString *_logArchivePath;
}

@property(copy, nonatomic) NSString *logArchivePath; // @synthesize logArchivePath=_logArchivePath;
@property(copy, nonatomic) NSSet *nameFilters; // @synthesize nameFilters=_nameFilters;
@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSDate *beginTime; // @synthesize beginTime=_beginTime;
@property(copy, nonatomic) NSSet *subsystemCategoryFilters; // @synthesize subsystemCategoryFilters=_subsystemCategoryFilters;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

