//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SafariShared/WBSTouchIconFetchOperation.h>

@class NSImage, _WKRemoteObjectInterface;

__attribute__((visibility("hidden")))
@interface TouchIconFetchOperation : WBSTouchIconFetchOperation
{
    _WKRemoteObjectInterface *_faviconObserverInterface;
    NSImage *_candidateOSXUserAgentIcon;
    BOOL _didTryWithIPhoneUserAgent;
}

- (void).cxx_destruct;
- (void)didCompleteWithResult:(id)arg1;
- (BOOL)_shouldTryDownloadingIconsWithIPhoneUserAgentForProposeIcon:(id)arg1 isFavicon:(BOOL)arg2;
- (void)_tryWithIPhoneUserAgent;

@end

