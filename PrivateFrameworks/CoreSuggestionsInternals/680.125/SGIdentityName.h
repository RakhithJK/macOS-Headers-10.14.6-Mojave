//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SGIdentityName : NSObject
{
    NSString *_privFullName;
    NSString *_firstname;
    NSString *_surname;
    NSString *_middlename;
    NSString *_prefix;
    NSString *_suffix;
}

+ (void)initialize;
+ (id)nameWithString:(id)arg1;
@property(readonly, nonatomic) NSString *suffix; // @synthesize suffix=_suffix;
@property(readonly, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(readonly, nonatomic) NSString *middlename; // @synthesize middlename=_middlename;
@property(readonly, nonatomic) NSString *surname; // @synthesize surname=_surname;
@property(readonly, nonatomic) NSString *firstname; // @synthesize firstname=_firstname;
- (void).cxx_destruct;
- (id)toSGNameWithOrigin:(id)arg1 recordId:(id)arg2 extractionType:(unsigned long long)arg3;
- (id)initWithWesternName:(id)arg1;
- (id)segmentWesternNameWithNameParts:(id)arg1 andPrefix:(id)arg2;
- (id)initWithSpanishName:(id)arg1;
- (id)initWithVietnameseName:(id)arg1;
- (id)initWithChineseName:(id)arg1;
- (id)initWithJapaneseName:(id)arg1;
- (id)initWithKoreanName:(id)arg1;
- (id)initWithString:(id)arg1;
@property(readonly, nonatomic) NSString *fullName;

@end

