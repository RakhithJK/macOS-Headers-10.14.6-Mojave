//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Automator/AMXPCToken.h>

@class NSData;

@interface AMWebArchiveXPCToken : AMXPCToken
{
    NSData *__webArchiveData;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NSData *_webArchiveData; // @synthesize _webArchiveData=__webArchiveData;
- (void).cxx_destruct;
- (id)_am_convertFromXPCWithWorkflow:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWebArchive:(id)arg1;

@end

