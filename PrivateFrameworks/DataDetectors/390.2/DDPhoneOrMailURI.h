//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DDPhoneOrMailURI : NSObject
{
    NSString *_value;
    BOOL _isMailScheme;
    BOOL _isHttpScheme;
}

+ (id)URIWithString:(id)arg1;
- (void).cxx_destruct;
- (id)value;
- (BOOL)isHttp;
- (BOOL)isPhone;
- (BOOL)isMail;
- (id)initWithString:(id)arg1;

@end

