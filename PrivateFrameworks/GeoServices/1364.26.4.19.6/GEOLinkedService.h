//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOFeatureStyleAttributes, GEOPDLinkedService, NSArray, NSString, NSTimeZone;

@interface GEOLinkedService : NSObject
{
    GEOPDLinkedService *_linkedService;
    NSArray *_cachedBusinessHours;
    BOOL _checkedForBusinessHoursAlready;
    NSTimeZone *_timeZone;
    NSArray *_businessHours;
    NSString *_localizedCategoryName;
    GEOFeatureStyleAttributes *_styleAttributes;
}

@property(retain, nonatomic) GEOFeatureStyleAttributes *styleAttributes; // @synthesize styleAttributes=_styleAttributes;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(retain, nonatomic) NSString *localizedCategoryName; // @synthesize localizedCategoryName=_localizedCategoryName;
@property(retain, nonatomic) NSArray *businessHours; // @synthesize businessHours=_businessHours;
- (void).cxx_destruct;
- (id)initWithGEOPDLinkedService:(id)arg1 timeZone:(id)arg2;

@end

