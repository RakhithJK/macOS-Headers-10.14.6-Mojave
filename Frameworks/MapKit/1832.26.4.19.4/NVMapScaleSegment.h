//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NVMapScaleSegment : NSObject
{
    BOOL unitAbbreviated;
    long long unit;
    double displayedLength;
    double lengthInMeters;
}

@property(nonatomic) BOOL unitAbbreviated; // @synthesize unitAbbreviated;
@property(nonatomic) double lengthInMeters; // @synthesize lengthInMeters;
@property(nonatomic) double displayedLength; // @synthesize displayedLength;
@property(nonatomic) long long unit; // @synthesize unit;
- (id)_localizedStringForUnabbreviatedUnitWithPluralRule:(long long)arg1;
- (id)localizedUnitWithDisplayedNumber:(id)arg1;

@end

