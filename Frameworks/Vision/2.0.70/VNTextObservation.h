//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Vision/VNRectangleObservation.h>

@class NSArray, NSString;

@interface VNTextObservation : VNRectangleObservation
{
    NSArray *_characterBoxes;
    NSString *_text;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)setText:(id)arg1;
@property(readonly, copy, nonatomic) NSString *text;
@property(copy, nonatomic) NSArray *characterBoxes;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

