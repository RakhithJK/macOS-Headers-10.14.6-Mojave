//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SFSiriWordTimingInfo : NSObject
{
    NSString *_localizedText;
    double _timeOffset;
    NSString *_wordID;
    struct _NSRange _textRange;
}

+ (id)timingInfoArrayWithSerializableArray:(id)arg1;
+ (id)serializableArrayWithTimingInfoArray:(id)arg1;
@property(copy, nonatomic) NSString *wordID; // @synthesize wordID=_wordID;
@property(nonatomic) struct _NSRange textRange; // @synthesize textRange=_textRange;
@property(nonatomic) double timeOffset; // @synthesize timeOffset=_timeOffset;
@property(copy, nonatomic) NSString *localizedText; // @synthesize localizedText=_localizedText;
- (void).cxx_destruct;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;

@end

