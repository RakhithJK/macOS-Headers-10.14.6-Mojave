//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EBFill : NSObject
{
}

+ (id)edFillFromXlDXf:(struct XlDXf *)arg1 edResources:(id)arg2;
+ (id)edFillFromXlXf:(struct XlXf *)arg1 edResources:(id)arg2;
+ (int)convertEDPatternFillEnumToXl:(int)arg1;
+ (int)convertXlFillPatternEnumToED:(int)arg1;
+ (_Bool)extractFromEDFill:(id)arg1 foreColorReference:(id *)arg2 backColorReference:(id *)arg3 fillPatternEnum:(int *)arg4;

@end

