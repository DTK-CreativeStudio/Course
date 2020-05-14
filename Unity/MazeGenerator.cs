using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MazeGenerator : MonoBehaviour {

    public int ver = 19;
    public int hor = 19;

    public GameObject cube;

    int vi;
    int hi;

    public GameObject miner;

    void Start () {
        Vector3 pos = new Vector3(0, 0, 0);

        for (vi = 0; vi < ver; vi++)
        {
            for (hi = 0; hi < hor; hi++)
            {
                GameObject copy = Instantiate(cube,
                    new Vector3(
                        pos.x + hi,
                        pos.y,
                        pos.z + vi
                    ), Quaternion.identity);
                copy.name = vi + "-" + hi.ToString();
            }
        }

        int ver_ini = ver / 2;
        int hor_ini = hor / 2;

        GameObject start = GameObject.Find(ver_ini + "-" + hor_ini);
        Destroy(start);
        Debug.Log(start);

        GameObject minerObj = Instantiate(miner, Vector3.zero, Quaternion.identity);
        Miner minerScr = minerObj.GetComponent<Miner>();
        minerScr.DoMining(ver_ini, hor_ini);
    }
}
