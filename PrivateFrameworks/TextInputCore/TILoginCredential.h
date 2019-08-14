//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInputCore/NSCopying-Protocol.h>

@class NSString;

@interface TILoginCredential : NSObject <NSCopying>
{
    NSString *_username;
    NSString *_password;
    NSString *_site;
}

@property(readonly, nonatomic) NSString *site; // @synthesize site=_site;
@property(readonly, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUsername:(id)arg1 password:(id)arg2 site:(id)arg3;

@end

