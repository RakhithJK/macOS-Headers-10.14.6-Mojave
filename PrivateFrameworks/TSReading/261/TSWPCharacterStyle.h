//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TSReading/TSSStyle.h>

#import <TSReading/TSSPreset-Protocol.h>

@class NSString;

@interface TSWPCharacterStyle : TSSStyle <TSSPreset>
{
}

+ (id)nullStyleWithContext:(id)arg1;
+ (id)nullStyleName;
+ (id)propertiesAllowingNSNull;
+ (id)nonEmphasisCharacterProperties;
+ (id)emphasisProperties;
+ (id)properties;
- (BOOL)transformsFontSizes;
- (int)writingDirection;
@property(readonly, nonatomic) NSString *presetKind;

@end

