//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SGMFoundInAppsICS;

@interface SGSuggestionsICSMetrics : NSObject
{
    SGMFoundInAppsICS *_foundInAppsICS;
}

+ (void)recordWithTimezoneValue:(struct SGMFoundInAppsICSTZValue_)arg1 datetimeType:(struct SGMFoundInAppsDatetimeType_)arg2;
+ (id)instance;
@property(retain, nonatomic) SGMFoundInAppsICS *foundInAppsICS; // @synthesize foundInAppsICS=_foundInAppsICS;
- (void).cxx_destruct;
- (id)init;

@end

