//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBIntentMetadata;

@protocol _INPBGetVisualCodeIntent <NSObject>
@property(nonatomic) BOOL hasVisualCodeType;
@property(nonatomic) int visualCodeType;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
- (int)StringAsVisualCodeType:(NSString *)arg1;
- (NSString *)visualCodeTypeAsString:(int)arg1;
@end

