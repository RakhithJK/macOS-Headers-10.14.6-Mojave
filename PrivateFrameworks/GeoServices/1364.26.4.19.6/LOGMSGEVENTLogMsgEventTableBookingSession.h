//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface LOGMSGEVENTLogMsgEventTableBookingSession : PBCodable <NSCopying>
{
    long long _blurredBookingTimestamp;
    long long _blurredReservationTimestamp;
    double _durationOfSessionInSeconds;
    unsigned long long _muid;
    NSString *_bookTableAppId;
    NSString *_bookTableSessionId;
    int _endState;
    int _endView;
    NSMutableArray *_errorMessages;
    NSString *_installNeededTappedAppId;
    unsigned int _tableSize;
    BOOL _addedSpecialRequest;
    BOOL _installCompleted;
    BOOL _installNeeded;
    BOOL _swipedAvailableTimes;
    BOOL _tappedDatePicker;
    struct {
        unsigned int blurredBookingTimestamp:1;
        unsigned int blurredReservationTimestamp:1;
        unsigned int durationOfSessionInSeconds:1;
        unsigned int muid:1;
        unsigned int endState:1;
        unsigned int endView:1;
        unsigned int tableSize:1;
        unsigned int addedSpecialRequest:1;
        unsigned int installCompleted:1;
        unsigned int installNeeded:1;
        unsigned int swipedAvailableTimes:1;
        unsigned int tappedDatePicker:1;
    } _has;
}

+ (Class)errorMessageType;
@property(retain, nonatomic) NSMutableArray *errorMessages; // @synthesize errorMessages=_errorMessages;
@property(nonatomic) BOOL tappedDatePicker; // @synthesize tappedDatePicker=_tappedDatePicker;
@property(nonatomic) BOOL swipedAvailableTimes; // @synthesize swipedAvailableTimes=_swipedAvailableTimes;
@property(nonatomic) BOOL addedSpecialRequest; // @synthesize addedSpecialRequest=_addedSpecialRequest;
@property(nonatomic) unsigned int tableSize; // @synthesize tableSize=_tableSize;
@property(nonatomic) BOOL installCompleted; // @synthesize installCompleted=_installCompleted;
@property(retain, nonatomic) NSString *installNeededTappedAppId; // @synthesize installNeededTappedAppId=_installNeededTappedAppId;
@property(nonatomic) BOOL installNeeded; // @synthesize installNeeded=_installNeeded;
@property(nonatomic) double durationOfSessionInSeconds; // @synthesize durationOfSessionInSeconds=_durationOfSessionInSeconds;
@property(nonatomic) long long blurredBookingTimestamp; // @synthesize blurredBookingTimestamp=_blurredBookingTimestamp;
@property(nonatomic) long long blurredReservationTimestamp; // @synthesize blurredReservationTimestamp=_blurredReservationTimestamp;
@property(nonatomic) unsigned long long muid; // @synthesize muid=_muid;
@property(retain, nonatomic) NSString *bookTableAppId; // @synthesize bookTableAppId=_bookTableAppId;
@property(retain, nonatomic) NSString *bookTableSessionId; // @synthesize bookTableSessionId=_bookTableSessionId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)errorMessageAtIndex:(unsigned long long)arg1;
- (unsigned long long)errorMessagesCount;
- (void)addErrorMessage:(id)arg1;
- (void)clearErrorMessages;
@property(nonatomic) BOOL hasTappedDatePicker;
@property(nonatomic) BOOL hasSwipedAvailableTimes;
@property(nonatomic) BOOL hasAddedSpecialRequest;
@property(nonatomic) BOOL hasTableSize;
@property(nonatomic) BOOL hasInstallCompleted;
@property(readonly, nonatomic) BOOL hasInstallNeededTappedAppId;
@property(nonatomic) BOOL hasInstallNeeded;
@property(nonatomic) BOOL hasDurationOfSessionInSeconds;
@property(nonatomic) BOOL hasBlurredBookingTimestamp;
@property(nonatomic) BOOL hasBlurredReservationTimestamp;
@property(nonatomic) BOOL hasMuid;
@property(readonly, nonatomic) BOOL hasBookTableAppId;
- (int)StringAsEndView:(id)arg1;
- (id)endViewAsString:(int)arg1;
@property(nonatomic) BOOL hasEndView;
@property(nonatomic) int endView; // @synthesize endView=_endView;
- (int)StringAsEndState:(id)arg1;
- (id)endStateAsString:(int)arg1;
@property(nonatomic) BOOL hasEndState;
@property(nonatomic) int endState; // @synthesize endState=_endState;
@property(readonly, nonatomic) BOOL hasBookTableSessionId;

@end

