//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/NSCopying-Protocol.h>

@interface _WKAutomationSessionConfiguration : NSObject <NSCopying>
{
    BOOL _allowsInsecureMediaCapture;
    BOOL _suppressesICECandidateFiltering;
}

@property(nonatomic) BOOL suppressesICECandidateFiltering; // @synthesize suppressesICECandidateFiltering=_suppressesICECandidateFiltering;
@property(nonatomic) BOOL allowsInsecureMediaCapture; // @synthesize allowsInsecureMediaCapture=_allowsInsecureMediaCapture;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

