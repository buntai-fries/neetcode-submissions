class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        car = sorted(zip(position, speed), reverse = True)
        fleet_catalog = []
        for pos, spd in car:
            time = (target - pos)/spd
            if not fleet_catalog or time > fleet_catalog[-1]:
                fleet_catalog.append(time)
        return len(fleet_catalog)