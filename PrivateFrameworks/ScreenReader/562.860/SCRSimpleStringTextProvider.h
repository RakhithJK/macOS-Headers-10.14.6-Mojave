//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenReader/SCRTextProviding-Protocol.h>

@class NSString, SCRTextRange;

__attribute__((visibility("hidden")))
@interface SCRSimpleStringTextProvider : NSObject <SCRTextProviding>
{
    NSString *__content;
    SCRTextRange *__contentRange;
}

@property(retain, nonatomic) SCRTextRange *_contentRange; // @synthesize _contentRange=__contentRange;
@property(copy, nonatomic) NSString *_content; // @synthesize _content=__content;
- (void).cxx_destruct;
- (id)substringWithRange:(id)arg1;
@property(readonly, nonatomic) SCRTextRange *contentRange;
- (id)initWithString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

