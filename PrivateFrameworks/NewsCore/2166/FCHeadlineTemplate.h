//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@class FCColor, FCTextInfo, NSArray;

@interface FCHeadlineTemplate : NSObject <NSCopying>
{
    FCTextInfo *_headlineTitleTextInfo;
    FCTextInfo *_headlineExcerptTextInfo;
    FCTextInfo *_headlineBylineTextInfo;
    FCColor *_backgroundColor;
    NSArray *_loadableFonts;
}

+ (id)_defaultBackgroundColor;
+ (id)_defaultTitleTextColor;
+ (id)templateByMergingTemplate:(id)arg1 intoTemplate:(id)arg2;
+ (id)_headlineTemplateWithJSON:(id)arg1 versionNumber:(id)arg2;
+ (id)headlineTemplateWithJSON:(id)arg1;
@property(copy, nonatomic) NSArray *loadableFonts; // @synthesize loadableFonts=_loadableFonts;
@property(copy, nonatomic) FCColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) FCTextInfo *headlineBylineTextInfo; // @synthesize headlineBylineTextInfo=_headlineBylineTextInfo;
@property(copy, nonatomic) FCTextInfo *headlineExcerptTextInfo; // @synthesize headlineExcerptTextInfo=_headlineExcerptTextInfo;
@property(copy, nonatomic) FCTextInfo *headlineTitleTextInfo; // @synthesize headlineTitleTextInfo=_headlineTitleTextInfo;
- (void).cxx_destruct;
- (id)_allThemePropertyNames;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithJSONDictionary:(id)arg1 versionNumber:(long long)arg2;
- (id)init;
- (void)mergeFromTemplate:(id)arg1;

@end

