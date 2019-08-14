//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFTextColumnSection-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface SFTextColumnSection : NSObject <SFTextColumnSection, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int textNoWrap:1;
        unsigned int textWeight:1;
    } _has;
    BOOL _textNoWrap;
    NSArray *_textLines;
    unsigned long long _textWeight;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned long long textWeight; // @synthesize textWeight=_textWeight;
@property(nonatomic) BOOL textNoWrap; // @synthesize textNoWrap=_textNoWrap;
@property(copy, nonatomic) NSArray *textLines; // @synthesize textLines=_textLines;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)hasTextWeight;
- (BOOL)hasTextNoWrap;
- (id)initWithProtobuf:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

