//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSServerCertificate, NSData;

@interface IDSAuthenticationCertificate : NSObject
{
    IDSServerCertificate *_backingCertificate;
}

@property(readonly, nonatomic) IDSServerCertificate *backingCertificate; // @synthesize backingCertificate=_backingCertificate;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSData *dataRepresentation;
- (id)initWithBackingCertificate:(id)arg1;
- (id)initWithDataRepresentation:(id)arg1;

@end

