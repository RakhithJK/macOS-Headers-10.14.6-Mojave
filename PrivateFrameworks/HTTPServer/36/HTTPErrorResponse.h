//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HTTPServer/HTTPResponse-Protocol.h>

@interface HTTPErrorResponse : NSObject <HTTPResponse>
{
    long long _status;
}

- (long long)status;
- (BOOL)isDone;
- (id)readDataOfLength:(unsigned long long)arg1;
- (void)setOffset:(unsigned long long)arg1;
- (unsigned long long)offset;
- (unsigned long long)contentLength;
- (id)initWithErrorCode:(int)arg1;

@end

